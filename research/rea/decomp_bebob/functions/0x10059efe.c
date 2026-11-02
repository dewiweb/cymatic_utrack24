// rea decompile_all
// name: CMDIChildWnd::LoadFrame
// address: 0x10059efe
// body: available
// range: 0x10059efe-0x10059fdd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMDIChildWnd::LoadFrame(unsigned int,unsigned long,class CWnd
   *,struct CCreateContext *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMDIChildWnd::LoadFrame
          (CMDIChildWnd *this,uint param_1,ulong param_2,CWnd *param_3,CCreateContext *param_4)

{
  uint uVar1;
  undefined **ppuVar2;
  HMODULE pHVar3;
  int iVar4;
  _AFX_THREAD_STATE *p_Var5;
  uint uVar6;
  ulong uVar7;
  undefined *puVar8;
  CWnd *pCVar9;
  CCreateContext *pCVar10;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uVar1 = param_1;
  uStack_4 = 4;
  local_8 = 0x10059f0a;
  param_2 = param_2 | 0x40000000;
  *(uint *)(this + 0xc4) = param_1;
  if ((param_4 != (CCreateContext *)0x0) && (iVar4 = *(int *)(param_4 + 8), iVar4 != 0)) {
    *(undefined4 *)(this + 0x110) = *(undefined4 *)(iVar4 + 0x88);
    *(undefined4 *)(this + 0x80) = *(undefined4 *)(iVar4 + 0x8c);
  }
  ppuVar2 = FUN_1000ad47();
  FUN_10005e00(local_14,(int *)ppuVar2);
  local_8 = 0;
  ppuVar2 = FUN_1000ad47();
  FUN_10005e00(&param_1,(int *)ppuVar2);
  local_8 = CONCAT31(local_8._1_3_,1);
  pHVar3 = (HMODULE)FUN_1000ac62();
  if ((pHVar3 != (HMODULE)0x0) && (iVar4 = FUN_10006200(local_14,pHVar3,uVar1), iVar4 != 0)) {
    AfxExtractSubString((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                        &param_1,local_14[0],0,L'\n');
  }
  iVar4 = *(int *)this;
  puVar8 = &DAT_10160d98;
  uVar6 = param_1;
  uVar7 = param_2;
  pCVar9 = param_3;
  pCVar10 = param_4;
  p_Var5 = GetIconWndClass(this,param_2,(ushort)uVar1);
  iVar4 = (**(code **)(iVar4 + 0x1b8))(p_Var5,uVar6,uVar7,puVar8,pCVar9,pCVar10);
  FUN_10001030((undefined4 *)(param_1 - 0x10));
  FUN_10001030((undefined4 *)(local_14[0] + -8));
  return (uint)(iVar4 != 0);
}

