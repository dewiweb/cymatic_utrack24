// rea decompile_all
// name: CArchive::CArchive
// address: 0x10009c7c
// body: available
// range: 0x10009c7c-0x10009d8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009ca7 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CArchive::CArchive(class CFile *,unsigned int,int,void *)
   
   Library: Visual Studio 2010 Release */

CArchive * __thiscall
CArchive::CArchive(CArchive *this,CFile *param_1,uint param_2,int param_3,void *param_4)

{
  CFile *pCVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  
  ppuVar2 = FUN_1000ad47();
  FUN_10005e00(this + 0x14,(int *)ppuVar2);
  pCVar1 = param_1;
  if (param_1 == (CFile *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  puVar3 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x18))(&param_1);
  FUN_10007c90(this + 0x14,puVar3);
  FUN_10001030((undefined4 *)(param_1 + -0x10));
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(uint *)(this + 0x18) = param_2;
  *(uint *)(this + 0x40) = (-(uint)((~(byte)param_2 & 1) != 0) & 0xffffffd0) + 0x40;
  *(void **)(this + 0x30) = param_4;
  *(CFile **)(this + 0x24) = pCVar1;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 1;
  *(undefined4 *)(this + 0x44) = 0x89;
  *(undefined4 *)(this + 0x1c) = 1;
  *(undefined4 *)(this + 8) = 0;
  uVar4 = (**(code **)(*(int *)pCVar1 + 0x54))(3,0,0,0);
  *(uint *)(this + 0xc) = uVar4 & 2;
  if (param_3 < 0x80) {
    *(undefined4 *)(this + 0x20) = 0x80;
    *(undefined4 *)(this + 0x30) = 0;
  }
  else {
    *(int *)(this + 0x20) = param_3;
  }
  iVar7 = *(int *)(this + 0x20);
  if (*(int *)(this + 0x30) == 0) {
    uVar4 = (**(code **)(**(int **)(this + 0x24) + 0x54))(3,0,0,0);
    *(uint *)(this + 8) = uVar4 & 1;
    if ((uVar4 & 1) == 0) {
      pvVar5 = FUN_1000858a(*(size_t *)(this + 0x20));
      *(void **)(this + 0x30) = pvVar5;
      *(undefined4 *)(this + 0x1c) = 0;
    }
    else {
      iVar7 = 0;
    }
  }
  iVar7 = *(int *)(this + 0x30) + iVar7;
  *(int *)(this + 0x2c) = iVar7;
  iVar6 = *(int *)(this + 0x30);
  if (((byte)this[0x18] & 1) != 0) {
    iVar6 = iVar7;
  }
  *(int *)(this + 0x28) = iVar6;
  return this;
}

