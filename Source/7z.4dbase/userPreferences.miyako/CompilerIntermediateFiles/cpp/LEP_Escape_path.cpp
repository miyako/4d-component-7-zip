Asm4d_Proc proc_LEP__ESCAPE;
extern unsigned char D_proc_LEP__ESCAPE__PATH[];
void proc_LEP__ESCAPE__PATH( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_LEP__ESCAPE__PATH);
	if (!ctx->doingAbort) try {
		Long lplatform;
		Txt lpath;
		new ( outResult) Txt();
		{
			Long t0;
			t0=inNbParam;
			if (0==t0.get()) goto _2;
		}
		lpath=Parm<Txt>(inParams,inNbParam,1).get();
		{
			Ref t2;
			t2.setLocalRef(ctx,lplatform.cv());
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){nullptr,t2.cv()},1,365)) goto _0;
			g->Check(ctx);
		}
		if (3!=lplatform.get()) goto _4;
		{
			Txt t4;
			t4=lpath.get();
			Txt t5;
			c.f.fLine=14;
			proc_LEP__ESCAPE(glob,ctx,1,1,(PCV[]){t4.cv()},t5.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lpath=t5.get();
		}
		goto _3;
_4:
		if (2!=lplatform.get()) goto _5;
		{
			Txt t7;
			c.f.fLine=18;
			if (g->Call(ctx,(PCV[]){t7.cv(),lpath.cv()},1,1106)) goto _0;
			g->Check(ctx);
			Txt t8;
			proc_LEP__ESCAPE(glob,ctx,1,1,(PCV[]){t7.cv()},t8.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lpath=t8.get();
		}
		goto _3;
_5:
_3:
_2:
		Res<Txt>(outResult)=lpath.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
