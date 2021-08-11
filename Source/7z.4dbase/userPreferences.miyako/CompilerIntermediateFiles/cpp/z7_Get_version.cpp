extern Txt kcaRUH6E4IBo;
Asm4d_Proc proc_Z7__GET__PATH;
extern unsigned char D_proc_Z7__GET__VERSION[];
void proc_Z7__GET__VERSION( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Z7__GET__VERSION);
	if (!ctx->doingAbort) try {
		Txt lexecutablePath;
		Txt lcommand;
		Txt lcopyright;
		Blb lstdIn;
		Blb lstdOut;
		Blb lstdErr;
		Value_array_longint lpos;
		Value_array_longint llen;
		new ( outResult) Txt();
		{
			Txt t0;
			c.f.fLine=3;
			proc_Z7__GET__PATH(glob,ctx,0,0,nullptr,t0.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lexecutablePath=t0.get();
		}
		lcommand=lexecutablePath.get();
		{
			Ref t1;
			t1.setLocalRef(ctx,lstdErr.cv());
			Ref t2;
			t2.setLocalRef(ctx,lstdOut.cv());
			Ref t3;
			t3.setLocalRef(ctx,lstdIn.cv());
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){nullptr,lcommand.cv(),t3.cv(),t2.cv(),t1.cv()},4,811)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t4;
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){t4.cv()},0,1572)) goto _0;
			Bool t5;
			t5=t4.get();
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Long(6).cv(),Long(3).cv()},3,955)) goto _0;
			Ref t7;
			t7.setLocalRef(ctx,lstdOut.cv());
			Txt t8;
			if (g->Call(ctx,(PCV[]){t8.cv(),t7.cv(),t6.cv()},2,555)) goto _0;
			g->Check(ctx);
			lcopyright=t8.get();
		}
		{
			Ref t9;
			t9.setLocalRef(ctx,lpos.cv());
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){nullptr,t9.cv(),Long(0).cv()},2,221)) goto _0;
		}
		{
			Ref t10;
			t10.setLocalRef(ctx,llen.cv());
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){nullptr,t10.cv(),Long(0).cv()},2,221)) goto _0;
		}
		{
			Ref t11;
			t11.setLocalRef(ctx,llen.cv());
			Ref t12;
			t12.setLocalRef(ctx,lpos.cv());
			Bool t13;
			c.f.fLine=14;
			if (g->Call(ctx,(PCV[]){t13.cv(),kcaRUH6E4IBo.cv(),lcopyright.cv(),Long(1).cv(),t12.cv(),t11.cv()},5,1019)) goto _0;
			g->Check(ctx);
			if (!(t13.get())) goto _2;
		}
		{
			Long t14;
			t14=llen.arrayElem(1).get();
			Long t15;
			t15=lpos.arrayElem(1).get();
			Txt t16;
			c.f.fLine=16;
			if (g->Call(ctx,(PCV[]){t16.cv(),lcopyright.cv(),t15.cv(),t14.cv()},3,12)) goto _0;
			Res<Txt>(outResult)=t16.get();
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
