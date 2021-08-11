extern Txt K_22;
extern Txt K_26_7C_3C_3E_28_29_25_5E_22_20;
extern Txt K_5C;
extern Txt K_5C_22;
extern Txt kLLQF6tmrvJ4;
extern unsigned char D_proc_LEP__ESCAPE[];
void proc_LEP__ESCAPE( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_LEP__ESCAPE);
	if (!ctx->doingAbort) try {
		Long v0;
		Long v1;
		Txt lmetacharacters;
		Bool lshoudQuote;
		Long v2;
		Long li;
		Long lplatform;
		Long v3;
		Txt lmetacharacter;
		Txt lparam;
		Long llen;
		new ( outResult) Txt();
		{
			Long t0;
			t0=inNbParam;
			if (0==t0.get()) goto _2;
		}
		lparam=Parm<Txt>(inParams,inNbParam,1).get();
		{
			Ref t2;
			t2.setLocalRef(ctx,lplatform.cv());
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){nullptr,t2.cv()},1,365)) goto _0;
			g->Check(ctx);
		}
		if (3!=lplatform.get()) goto _3;
		{
			Bool t4;
			t4=false;
			lshoudQuote=t4.get();
		}
		lmetacharacters=K_26_7C_3C_3E_28_29_25_5E_22_20.get();
		{
			Long t5;
			t5=lmetacharacters.get().fLength;
			llen=t5.get();
		}
		li=1;
		v0=llen.get();
		goto _4;
_5:
		{
			Txt t6;
			c.f.fLine=21;
			if (g->Call(ctx,(PCV[]){t6.cv(),lmetacharacters.cv(),li.cv(),Long(1).cv()},3,12)) goto _0;
			lmetacharacter=t6.get();
		}
		{
			Long t7;
			c.f.fLine=22;
			if (g->Call(ctx,(PCV[]){t7.cv(),lmetacharacter.cv(),lparam.cv(),Ref((optyp)3).cv()},3,15)) goto _0;
			Bool t8;
			t8=0!=t7.get();
			lshoudQuote=lshoudQuote.get()||t8.get();
		}
		if (!(lshoudQuote.get())) goto _6;
		li=llen.get();
_6:
		li=li.get()+1;
_4:
		if (li.get()<=v0.get()) goto _5;
		if (!(lshoudQuote.get())) goto _7;
		{
			Long t12;
			t12=lparam.get().fLength;
			Txt t13;
			c.f.fLine=29;
			if (g->Call(ctx,(PCV[]){t13.cv(),lparam.cv(),t12.cv()},2,12)) goto _0;
			Bool t14;
			t14=g->CompareString(ctx,t13.get(),K_5C.get())==0;
			if (!(t14.get())) goto _8;
		}
		{
			Txt t15;
			g->AddString(K_22.get(),lparam.get(),t15.get());
			g->AddString(t15.get(),K_5C_22.get(),lparam.get());
		}
		goto _9;
_8:
		{
			Txt t17;
			g->AddString(K_22.get(),lparam.get(),t17.get());
			g->AddString(t17.get(),K_22.get(),lparam.get());
		}
_9:
_7:
		goto _10;
_3:
		lmetacharacters=kLLQF6tmrvJ4.get();
		li=1;
		{
			Long t19;
			t19=lmetacharacters.get().fLength;
			v2=t19.get();
		}
		goto _11;
_12:
		{
			Txt t20;
			c.f.fLine=41;
			if (g->Call(ctx,(PCV[]){t20.cv(),lmetacharacters.cv(),li.cv(),Long(1).cv()},3,12)) goto _0;
			lmetacharacter=t20.get();
		}
		{
			Txt t21;
			g->AddString(K_5C.get(),lmetacharacter.get(),t21.get());
			Txt t22;
			c.f.fLine=42;
			if (g->Call(ctx,(PCV[]){t22.cv(),lparam.cv(),lmetacharacter.cv(),t21.cv(),Ref((optyp)3).cv()},4,233)) goto _0;
			lparam=t22.get();
		}
		li=li.get()+1;
_11:
		if (li.get()<=v2.get()) goto _12;
_10:
_2:
		Res<Txt>(outResult)=lparam.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
