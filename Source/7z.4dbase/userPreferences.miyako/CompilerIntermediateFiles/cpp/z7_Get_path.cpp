extern Txt K7z;
extern Txt K7za;
extern Txt K7za_2Eexe;
extern Txt KMacOS;
extern Txt KWindows;
extern Txt KWindows64;
extern Txt K_3A;
extern Txt K_40_28x86_29_5C;
extern Txt Kchmod_20555_207za;
extern Txt Ktrue;
extern Txt k6Nsk9JOUrts;
extern Txt kB$4yjFhOioQ;
extern Txt kNXRBf7MoS1g;
Asm4d_Proc proc_LEP__ESCAPE__PATH;
extern unsigned char D_proc_Z7__GET__PATH[];
void proc_Z7__GET__PATH( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Z7__GET__PATH);
	if (!ctx->doingAbort) try {
		Txt lpath;
		Bool lisWin64;
		new ( outResult) Txt();
		{
			Txt t0;
			c.f.fLine=3;
			if (g->Call(ctx,(PCV[]){t0.cv(),Long(4).cv()},1,485)) goto _0;
			g->Check(ctx);
			Txt t1;
			g->AddString(t0.get(),K7z.get(),t1.get());
			g->AddString(t1.get(),K_3A.get(),lpath.get());
		}
		{
			Bool t3;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1572)) goto _0;
			if (!(t3.get())) goto _3;
		}
		{
			Long t4;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t4.cv()},0,494)) goto _0;
			g->Check(ctx);
			if (4!=t4.get()) goto _4;
		}
		{
			Txt t6;
			g->AddString(lpath.get(),KMacOS.get(),t6.get());
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){nullptr,kNXRBf7MoS1g.cv(),t6.cv()},2,812)) goto _0;
			g->Check(ctx);
		}
		c.f.fLine=10;
		if (g->Call(ctx,(PCV[]){nullptr,k6Nsk9JOUrts.cv(),Ktrue.cv()},2,812)) goto _0;
		g->Check(ctx);
		c.f.fLine=11;
		if (g->Call(ctx,(PCV[]){nullptr,Kchmod_20555_207za.cv()},1,811)) goto _0;
		g->Check(ctx);
_4:
		{
			Txt t7;
			g->AddString(lpath.get(),KMacOS.get(),t7.get());
			Txt t8;
			g->AddString(t7.get(),K_3A.get(),t8.get());
			g->AddString(t8.get(),K7za.get(),lpath.get());
		}
		goto _2;
_3:
		{
			Bool t10;
			c.f.fLine=16;
			if (g->Call(ctx,(PCV[]){t10.cv()},0,1573)) goto _0;
			if (!(t10.get())) goto _5;
		}
		{
			Txt t11;
			c.f.fLine=18;
			if (g->Call(ctx,(PCV[]){t11.cv(),Long(16).cv()},1,487)) goto _0;
			g->Check(ctx);
			Bool t12;
			t12=g->CompareString(ctx,t11.get(),K_40_28x86_29_5C.get())==0;
			lisWin64=t12.get();
		}
		if (!(lisWin64.get())) goto _6;
		{
			Txt t13;
			g->AddString(lpath.get(),KWindows64.get(),t13.get());
			Txt t14;
			g->AddString(t13.get(),K_3A.get(),t14.get());
			g->AddString(t14.get(),K7za_2Eexe.get(),lpath.get());
		}
		goto _7;
_6:
		{
			Txt t16;
			g->AddString(lpath.get(),KWindows.get(),t16.get());
			Txt t17;
			g->AddString(t16.get(),K_3A.get(),t17.get());
			g->AddString(t17.get(),K7za_2Eexe.get(),lpath.get());
		}
_7:
		c.f.fLine=26;
		if (g->Call(ctx,(PCV[]){nullptr,kB$4yjFhOioQ.cv(),Ktrue.cv()},2,812)) goto _0;
		g->Check(ctx);
		goto _2;
_5:
_2:
		{
			Txt t19;
			t19=lpath.get();
			Txt t20;
			c.f.fLine=30;
			proc_LEP__ESCAPE__PATH(glob,ctx,1,1,(PCV[]){t19.cv()},t20.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Res<Txt>(outResult)=t20.get();
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
