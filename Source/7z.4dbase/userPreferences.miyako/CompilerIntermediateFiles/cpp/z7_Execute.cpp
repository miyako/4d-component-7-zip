extern Txt K_3A;
extern Txt Kutf_2D8;
extern Txt k7WPvlTPMJhg;
Asm4d_Proc proc_Z7__GET__PATH;
extern unsigned char D_proc_Z7__EXECUTE[];
void proc_Z7__EXECUTE( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Z7__EXECUTE);
	if (!ctx->doingAbort) try {
		Txt lexecutablePath;
		Txt lcommand;
		Txt loutput;
		Ptr lpReponse;
		Txt largument;
		Long lparams;
		Blb lstdIn;
		Blb lstdOut;
		Txt lerror;
		Blb lstdErr;
		Value_array_longint lpos;
		Value_array_longint llen;
		new ( outResult) Bool();
		{
			Long t0;
			t0=inNbParam;
			lparams=t0.get();
		}
		if (1>=lparams.get()) goto _2;
		largument=Parm<Txt>(inParams,inNbParam,1).get();
		{
			Txt t2;
			c.f.fLine=14;
			proc_Z7__GET__PATH(glob,ctx,0,0,nullptr,t2.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lexecutablePath=t2.get();
		}
		g->AddString(lexecutablePath.get(),largument.get(),lcommand.get());
		lpReponse=Parm<Ptr>(inParams,inNbParam,2).get();
		if (2>=lparams.get()) goto _3;
		lstdIn=Parm<Blb>(inParams,inNbParam,3).get();
_3:
		{
			Ref t5;
			t5.setLocalRef(ctx,lstdErr.cv());
			Ref t6;
			t6.setLocalRef(ctx,lstdOut.cv());
			Ref t7;
			t7.setLocalRef(ctx,lstdIn.cv());
			c.f.fLine=22;
			if (g->Call(ctx,(PCV[]){nullptr,lcommand.cv(),t7.cv(),t6.cv(),t5.cv()},4,811)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t8;
			t8.setLocalRef(ctx,lstdErr.cv());
			Long t9;
			c.f.fLine=24;
			if (g->Call(ctx,(PCV[]){t9.cv(),t8.cv()},1,605)) goto _0;
			if (0!=t9.get()) goto _4;
		}
		{
			Bool t11;
			t11=g->CompareString(ctx,K_3A.get(),K_3A.get())==0;
			Bool t12;
			t12=t11.get();
			Variant t13;
			c.f.fLine=26;
			if (g->Call(ctx,(PCV[]){t13.cv(),t12.cv(),Long(6).cv(),Long(3).cv()},3,955)) goto _0;
			Ref t14;
			t14.setLocalRef(ctx,lstdOut.cv());
			Txt t15;
			if (g->Call(ctx,(PCV[]){t15.cv(),t14.cv(),t13.cv()},2,555)) goto _0;
			g->Check(ctx);
			loutput=t15.get();
		}
		{
			Ref t16;
			t16.setLocalRef(ctx,lpos.cv());
			c.f.fLine=28;
			if (g->Call(ctx,(PCV[]){nullptr,t16.cv(),Long(0).cv()},2,221)) goto _0;
		}
		{
			Ref t17;
			t17.setLocalRef(ctx,llen.cv());
			c.f.fLine=29;
			if (g->Call(ctx,(PCV[]){nullptr,t17.cv(),Long(0).cv()},2,221)) goto _0;
		}
		{
			Ref t18;
			t18.setLocalRef(ctx,llen.cv());
			Ref t19;
			t19.setLocalRef(ctx,lpos.cv());
			Bool t20;
			c.f.fLine=31;
			if (g->Call(ctx,(PCV[]){t20.cv(),k7WPvlTPMJhg.cv(),loutput.cv(),Long(1).cv(),t19.cv(),t18.cv()},5,1019)) goto _0;
			g->Check(ctx);
			if (!(t20.get())) goto _5;
		}
		{
			Long t21;
			t21=llen.arrayElem(2).get();
			Long t22;
			t22=lpos.arrayElem(2).get();
			Txt t23;
			c.f.fLine=32;
			if (g->Call(ctx,(PCV[]){t23.cv(),loutput.cv(),t22.cv(),t21.cv()},3,12)) goto _0;
			lerror=t23.get();
		}
		{
			Bool t24;
			c.f.fLine=33;
			if (g->Call(ctx,(PCV[]){t24.cv(),Parm<Ptr>(inParams,inNbParam,2).cv()},1,315)) goto _0;
			Bool t25;
			t25=t24.get();
			Bool t26;
			t26=!(t25.get());
			if (!(t26.get())) goto _6;
		}
		{
			Ref t27;
			c.f.fLine=35;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t27.cv(),Parm<Ptr>(inParams,inNbParam,2).cv(),(PCV)-1,nullptr})) goto _0;
			Long t28;
			if (g->Call(ctx,(PCV[]){t28.cv(),t27.cv()},1,295)) goto _0;
			if (2!=t28.get()) goto _8;
		}
		{
			Txt t30;
			t30=lerror.get();
			c.f.fLine=36;
			if (!g->SetValue(ctx,(PCV[]){t30.cv(),Parm<Ptr>(inParams,inNbParam,2).cv(),(PCV)-1,nullptr})) goto _0;
		}
		goto _7;
_8:
		{
			Ref t31;
			c.f.fLine=37;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t31.cv(),Parm<Ptr>(inParams,inNbParam,2).cv(),(PCV)-1,nullptr})) goto _0;
			Long t32;
			if (g->Call(ctx,(PCV[]){t32.cv(),t31.cv()},1,295)) goto _0;
			if (30!=t32.get()) goto _9;
		}
		{
			Ref t34;
			c.f.fLine=38;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t34.cv(),Parm<Ptr>(inParams,inNbParam,2).cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,lerror.cv(),Kutf_2D8.cv(),t34.cv()},3,1011)) goto _0;
			g->Check(ctx);
		}
		goto _7;
_9:
_7:
_6:
		goto _10;
_5:
		{
			Bool t35;
			t35=true;
			Res<Bool>(outResult)=t35.get();
		}
_10:
		goto _11;
_4:
		{
			Bool t36;
			t36=false;
			Res<Bool>(outResult)=t36.get();
		}
		{
			Bool t37;
			c.f.fLine=46;
			if (g->Call(ctx,(PCV[]){t37.cv(),Parm<Ptr>(inParams,inNbParam,2).cv()},1,315)) goto _0;
			Bool t38;
			t38=t37.get();
			Bool t39;
			t39=!(t38.get());
			if (!(t39.get())) goto _12;
		}
		{
			Ref t40;
			c.f.fLine=48;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t40.cv(),Parm<Ptr>(inParams,inNbParam,2).cv(),(PCV)-1,nullptr})) goto _0;
			Long t41;
			if (g->Call(ctx,(PCV[]){t41.cv(),t40.cv()},1,295)) goto _0;
			if (2!=t41.get()) goto _14;
		}
		{
			Bool t43;
			t43=g->CompareString(ctx,K_3A.get(),K_3A.get())==0;
			Bool t44;
			t44=t43.get();
			Variant t45;
			c.f.fLine=50;
			if (g->Call(ctx,(PCV[]){t45.cv(),t44.cv(),Long(6).cv(),Long(3).cv()},3,955)) goto _0;
			Ref t46;
			t46.setLocalRef(ctx,lstdErr.cv());
			Txt t47;
			if (g->Call(ctx,(PCV[]){t47.cv(),t46.cv(),t45.cv()},2,555)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t47.cv(),Parm<Ptr>(inParams,inNbParam,2).cv(),(PCV)-1,nullptr})) goto _0;
		}
		goto _13;
_14:
		{
			Ref t48;
			c.f.fLine=52;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t48.cv(),Parm<Ptr>(inParams,inNbParam,2).cv(),(PCV)-1,nullptr})) goto _0;
			Long t49;
			if (g->Call(ctx,(PCV[]){t49.cv(),t48.cv()},1,295)) goto _0;
			if (30!=t49.get()) goto _15;
		}
		{
			Blb t51;
			t51=lstdErr.get();
			c.f.fLine=53;
			if (!g->SetValue(ctx,(PCV[]){t51.cv(),Parm<Ptr>(inParams,inNbParam,2).cv(),(PCV)-1,nullptr})) goto _0;
		}
		goto _13;
_15:
_13:
_12:
_11:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
