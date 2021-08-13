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
			Bool t2;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t2.cv()},0,1573)) goto _0;
			if (!(t2.get())) goto _4;
		}
		{
			Bool t3;
			t3=false;
			lshoudQuote=t3.get();
		}
		lmetacharacters=K_26_7C_3C_3E_28_29_25_5E_22_20.get();
		{
			Long t4;
			t4=lmetacharacters.get().fLength;
			llen=t4.get();
		}
		li=1;
		v0=llen.get();
		goto _5;
_6:
		{
			Txt t5;
			c.f.fLine=21;
			if (g->Call(ctx,(PCV[]){t5.cv(),lmetacharacters.cv(),li.cv(),Long(1).cv()},3,12)) goto _0;
			lmetacharacter=t5.get();
		}
		{
			Long t6;
			c.f.fLine=22;
			if (g->Call(ctx,(PCV[]){t6.cv(),lmetacharacter.cv(),lparam.cv(),Ref((optyp)3).cv()},3,15)) goto _0;
			Bool t7;
			t7=0!=t6.get();
			lshoudQuote=lshoudQuote.get()||t7.get();
		}
		if (!(lshoudQuote.get())) goto _7;
		li=llen.get();
_7:
		li=li.get()+1;
_5:
		if (li.get()<=v0.get()) goto _6;
		if (!(lshoudQuote.get())) goto _8;
		{
			Long t11;
			t11=lparam.get().fLength;
			Txt t12;
			c.f.fLine=29;
			if (g->Call(ctx,(PCV[]){t12.cv(),lparam.cv(),t11.cv()},2,12)) goto _0;
			Bool t13;
			t13=g->CompareString(ctx,t12.get(),K_5C.get())==0;
			if (!(t13.get())) goto _9;
		}
		{
			Txt t14;
			g->AddString(K_22.get(),lparam.get(),t14.get());
			g->AddString(t14.get(),K_5C_22.get(),lparam.get());
		}
		goto _10;
_9:
		{
			Txt t16;
			g->AddString(K_22.get(),lparam.get(),t16.get());
			g->AddString(t16.get(),K_22.get(),lparam.get());
		}
_10:
_8:
		goto _3;
_4:
		{
			Bool t18;
			c.f.fLine=36;
			if (g->Call(ctx,(PCV[]){t18.cv()},0,1572)) goto _0;
			if (!(t18.get())) goto _11;
		}
		lmetacharacters=kLLQF6tmrvJ4.get();
		li=1;
		{
			Long t19;
			t19=lmetacharacters.get().fLength;
			v2=t19.get();
		}
		goto _12;
_13:
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
_12:
		if (li.get()<=v2.get()) goto _13;
		goto _3;
_11:
_3:
_2:
		Res<Txt>(outResult)=lparam.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
