// rea decompile_all
// name: CUIntArray::SetSize
// address: 0x1000a196
// body: available
// range: 0x1000a196-0x1000a2bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000a1a9 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CUIntArray::SetSize(int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CUIntArray::SetSize(CUIntArray *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  
  iVar2 = param_1;
  pvVar5 = (void *)0x0;
  if (param_1 < 0) goto LAB_1000a1a9;
  if (-1 < param_2) {
    *(int *)(this + 0x10) = param_2;
  }
  if (param_1 == 0) {
    FUN_100085b9(*(void **)(this + 4));
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 8) = 0;
LAB_1000a2b2:
    *(void **)(this + 4) = pvVar5;
  }
  else {
    if (*(int *)(this + 4) == 0) {
      pvVar5 = FUN_1000858a(param_1 << 2);
      *(void **)(this + 4) = pvVar5;
      _memset(pvVar5,0,param_1 << 2);
      *(int *)(this + 0xc) = param_1;
    }
    else {
      iVar1 = *(int *)(this + 0xc);
      if (iVar1 < param_1) {
        iVar4 = *(int *)(this + 0x10);
        if (iVar4 == 0) {
          iVar4 = (int)(*(int *)(this + 8) + (*(int *)(this + 8) >> 0x1f & 7U)) >> 3;
          if (iVar4 < 4) {
LAB_1000a24c:
            iVar4 = 4;
          }
          else if (iVar4 < 0x401) {
            if (iVar4 < 4) goto LAB_1000a24c;
          }
          else {
            iVar4 = 0x400;
          }
        }
        iVar3 = iVar4 + iVar1;
        if (iVar4 + iVar1 <= param_1) {
          iVar3 = param_1;
        }
        param_1 = iVar3;
        if (param_1 < iVar1) {
LAB_1000a1a9:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        pvVar5 = FUN_1000858a(param_1 << 2);
        FUN_10004cd0(pvVar5,param_1 << 2,*(void **)(this + 4),*(int *)(this + 8) << 2);
        _memset((void *)((int)pvVar5 + *(int *)(this + 8) * 4),0,(iVar2 - *(int *)(this + 8)) * 4);
        FUN_100085b9(*(void **)(this + 4));
        *(int *)(this + 8) = iVar2;
        *(int *)(this + 0xc) = param_1;
        goto LAB_1000a2b2;
      }
      iVar2 = *(int *)(this + 8);
      if (iVar2 < param_1) {
        _memset((void *)(*(int *)(this + 4) + iVar2 * 4),0,(param_1 - iVar2) * 4);
      }
    }
    *(int *)(this + 8) = param_1;
  }
  return;
}

