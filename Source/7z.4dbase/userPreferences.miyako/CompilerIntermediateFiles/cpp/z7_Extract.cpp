extern Txt K_20_2Do;
extern Txt K_20_2Dp;
extern Txt K_20_2Dy_20x_20;
extern Txt Kutf_2D8;
Asm4d_Proc proc_LEP__ESCAPE;
Asm4d_Proc proc_LEP__ESCAPE__PATH;
Asm4d_Proc proc_Z7__EXECUTE;
extern unsigned char D_proc_Z7__EXTRACT[];
void proc_Z7__EXTRACT( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Z7__EXTRACT);
	if (!ctx->doingAbort) try {
		Txt lcommand;
		Txt ltargetPath;
		Long lparams;
		Blb lresponse;
		Txt lsourcePath;
		new ( outResult) Bool();
		{
			Long t0;
			t0=inNbParam;
			lparams=t0.get();
		}
		if (1>=lparams.get()) goto _2;
		lsourcePath=Parm<Txt>(inParams,inNbParam,1).get();
		ltargetPath=Parm<Txt>(inParams,inNbParam,2).get();
		{
			Txt t2;
			t2=lsourcePath.get();
			Txt t3;
			c.f.fLine=16;
			proc_LEP__ESCAPE__PATH(glob,ctx,1,1,(PCV[]){t2.cv()},t3.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t4;
			g->AddString(K_20_2Dy_20x_20.get(),t3.get(),t4.get());
			Txt t5;
			g->AddString(t4.get(),K_20_2Do.get(),t5.get());
			Txt t6;
			t6=ltargetPath.get();
			Txt t7;
			proc_LEP__ESCAPE__PATH(glob,ctx,1,1,(PCV[]){t6.cv()},t7.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			g->AddString(t5.get(),t7.get(),lcommand.get());
		}
		if (2>=lparams.get()) goto _3;
		{
			Long t10;
			t10=Parm<Txt>(inParams,inNbParam,3).get().fLength;
			if (0==t10.get()) goto _4;
		}
		{
			Txt t12;
			g->AddString(lcommand.get(),K_20_2Dp.get(),t12.get());
			Txt t13;
			t13=Parm<Txt>(inParams,inNbParam,3).get();
			Txt t14;
			c.f.fLine=20;
			proc_LEP__ESCAPE(glob,ctx,1,1,(PCV[]){t13.cv()},t14.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			g->AddString(t12.get(),t14.get(),lcommand.get());
		}
_4:
_3:
		{
			Ptr t16;
			t16.adopt(g->CreatePointerLocal(ctx,lresponse.cv(),-1,-1));
			Txt t17;
			t17=lcommand.get();
			Bool t18;
			c.f.fLine=26;
			proc_Z7__EXECUTE(glob,ctx,2,2,(PCV[]){t17.cv(),t16.cv()},t18.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			if (!(t18.get())) goto _5;
		}
		{
			Bool t19;
			t19=true;
			Res<Bool>(outResult)=t19.get();
		}
		goto _6;
_5:
		if (3>=lparams.get()) goto _7;
		{
			Bool t21;
			c.f.fLine=33;
			if (g->Call(ctx,(PCV[]){t21.cv(),Parm<Ptr>(inParams,inNbParam,4).cv()},1,315)) goto _0;
			Bool t22;
			t22=t21.get();
			Bool t23;
			t23=!(t22.get());
			if (!(t23.get())) goto _8;
		}
		{
			Ref t24;
			c.f.fLine=34;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t24.cv(),Parm<Ptr>(inParams,inNbParam,4).cv(),(PCV)-1,nullptr})) goto _0;
			Long t25;
			if (g->Call(ctx,(PCV[]){t25.cv(),t24.cv()},1,295)) goto _0;
			if (2!=t25.get()) goto _9;
		}
		{
			Ref t27;
			t27.setLocalRef(ctx,lresponse.cv());
			Txt t28;
			c.f.fLine=35;
			if (g->Call(ctx,(PCV[]){t28.cv(),t27.cv(),Kutf_2D8.cv()},2,1012)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t28.cv(),Parm<Ptr>(inParams,inNbParam,4).cv(),(PCV)-1,nullptr})) goto _0;
		}
_9:
_8:
_7:
_6:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
