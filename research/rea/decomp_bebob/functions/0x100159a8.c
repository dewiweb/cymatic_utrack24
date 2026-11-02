// rea decompile_all
// name: CFileException::GetErrorMessage
// address: 0x100159a8
// body: available
// range: 0x100159a8-0x10015a74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CFileException::GetErrorMessage(wchar_t *,unsigned int,unsigned
   int *)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall
CFileException::GetErrorMessage(CFileException *this,wchar_t *param_1,uint param_2,uint *param_3)

{
  undefined **ppuVar1;
  int *piVar2;
  HMODULE pHVar3;
  errno_t eVar4;
  int iVar5;
  int *piVar6;
  int *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x100159b4;
  if ((param_1 == (wchar_t *)0x0) || (param_2 == 0)) {
    iVar5 = 0;
  }
  else {
    if (param_3 != (uint *)0x0) {
      *param_3 = *(int *)(this + 8) + 0xf1a0;
    }
    ppuVar1 = FUN_1000ad47();
    FUN_10005e00(&param_3,(int *)ppuVar1);
    local_8 = 0;
    piVar2 = FUN_10005e30((int *)(*(int *)(this + 0x10) + -0x10));
    piVar6 = piVar2 + 4;
    local_8 = CONCAT31(local_8._1_3_,1);
    local_14[0] = piVar6;
    if (piVar2[1] == 0) {
      pHVar3 = (HMODULE)FUN_1000ac62();
      if (pHVar3 != (HMODULE)0x0) {
        FUN_10006200(local_14,pHVar3,0xf006);
        piVar6 = local_14[0];
      }
    }
    AfxFormatString1((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&param_3,
                     *(int *)(this + 8) + 0xf1a0);
    eVar4 = _wcsncpy_s(param_1,param_2,(wchar_t *)param_3,0xffffffff);
    FUN_10004c40(eVar4);
    FUN_10001030(piVar6 + -4);
    FUN_10001030(param_3 + -4);
    iVar5 = 1;
  }
  return iVar5;
}

