extern Txt K;
extern Txt K_2Ezip;
Asm4d_Proc proc_Z7__ARCHIVE;
Asm4d_Proc proc_Z7__EXTRACT;
Asm4d_Proc proc_Z7__GET__VERSION;
extern unsigned char D_proc___SAMPLE[];
void proc___SAMPLE( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc___SAMPLE);
	if (!ctx->doingAbort) try {
		Txt lversion;
		Txt ltargetPath;
		Txt lerror;
		Txt lsourcePath;
		Txt lpassword;
		{
			Txt t0;
			c.f.fLine=1;
			proc_Z7__GET__VERSION(glob,ctx,0,0,nullptr,t0.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lversion=t0.get();
		}
		{
			Txt t1;
			c.f.fLine=3;
			if (g->Call(ctx,(PCV[]){t1.cv(),Long(7).cv()},1,485)) goto _0;
			g->Check(ctx);
			lsourcePath=t1.get();
		}
		{
			Txt t2;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t2.cv(),Long(15).cv()},1,487)) goto _0;
			g->Check(ctx);
			Txt t3;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1066)) goto _0;
			Txt t4;
			g->AddString(t2.get(),t3.get(),t4.get());
			g->AddString(t4.get(),K_2Ezip.get(),ltargetPath.get());
		}
		lpassword=K.get();
		lerror=K.get();
		{
			Ptr t6;
			t6.adopt(g->CreatePointerLocal(ctx,lerror.cv(),-1,-1));
			Txt t7;
			t7=lpassword.get();
			Txt t8;
			t8=ltargetPath.get();
			Txt t9;
			t9=lsourcePath.get();
			Bool t10;
			c.f.fLine=7;
			proc_Z7__ARCHIVE(glob,ctx,4,4,(PCV[]){t9.cv(),t8.cv(),t7.cv(),t6.cv()},t10.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			if (!(t10.get())) goto _2;
		}
		c.f.fLine=8;
		if (g->Call(ctx,(PCV[]){nullptr,ltargetPath.cv()},1,922)) goto _0;
		g->Check(ctx);
_2:
		lsourcePath=ltargetPath.get();
		{
			Long t11;
			t11=ltargetPath.get().fLength;
			Long t12;
			t12=t11.get()-4;
			Txt t13;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t13.cv(),ltargetPath.cv(),Long(1).cv(),t12.cv()},3,12)) goto _0;
			ltargetPath=t13.get();
		}
		c.f.fLine=13;
		if (g->Call(ctx,(PCV[]){nullptr,ltargetPath.cv()},1,475)) goto _0;
		g->Check(ctx);
		lerror=K.get();
		{
			Ptr t14;
			t14.adopt(g->CreatePointerLocal(ctx,lerror.cv(),-1,-1));
			Txt t15;
			t15=lpassword.get();
			Txt t16;
			t16=ltargetPath.get();
			Txt t17;
			t17=lsourcePath.get();
			Bool t18;
			c.f.fLine=15;
			proc_Z7__EXTRACT(glob,ctx,4,4,(PCV[]){t17.cv(),t16.cv(),t15.cv(),t14.cv()},t18.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			if (!(t18.get())) goto _3;
		}
		c.f.fLine=16;
		if (g->Call(ctx,(PCV[]){nullptr,ltargetPath.cv()},1,922)) goto _0;
		g->Check(ctx);
_3:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
