Asm4d_Proc proc_LEP__ESCAPE;
extern unsigned char D_proc_LEP__ESCAPE__PATH[];
void proc_LEP__ESCAPE__PATH( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_LEP__ESCAPE__PATH);
	if (!ctx->doingAbort) try {
		Txt lpath;
		new ( outResult) Txt();
		{
			Long t0;
			t0=inNbParam;
			if (0==t0.get()) goto _2;
		}
		lpath=Parm<Txt>(inParams,inNbParam,1).get();
		{
			Bool t2;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t2.cv()},0,1573)) goto _0;
			if (!(t2.get())) goto _4;
		}
		{
			Txt t3;
			t3=lpath.get();
			Txt t4;
			c.f.fLine=10;
			proc_LEP__ESCAPE(glob,ctx,1,1,(PCV[]){t3.cv()},t4.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lpath=t4.get();
		}
		goto _3;
_4:
		{
			Bool t5;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1572)) goto _0;
			if (!(t5.get())) goto _5;
		}
		{
			Txt t6;
			c.f.fLine=14;
			if (g->Call(ctx,(PCV[]){t6.cv(),lpath.cv()},1,1106)) goto _0;
			g->Check(ctx);
			Txt t7;
			proc_LEP__ESCAPE(glob,ctx,1,1,(PCV[]){t6.cv()},t7.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lpath=t7.get();
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
