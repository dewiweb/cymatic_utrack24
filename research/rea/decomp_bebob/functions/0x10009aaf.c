// rea decompile_all
// name: CArchive::Write
// address: 0x10009aaf
// body: available
// range: 0x10009aaf-0x10009b75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009adb to 0x1000937c FUN_1000937c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10009b51 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CArchive::Write(void const *,unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CArchive::Write(CArchive *this,void *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_2 != 0) && (param_1 != (void *)0x0)) {
    if ((~*(uint *)(this + 0x18) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1000937c(2,*(char **)(this + 0x14));
    }
    uVar1 = *(int *)(this + 0x2c) - (int)*(void **)(this + 0x28);
    uVar2 = param_2;
    if (uVar1 <= param_2) {
      uVar2 = uVar1;
    }
    FUN_10004cd0(*(void **)(this + 0x28),uVar1,param_1,uVar2);
    *(uint *)(this + 0x28) = *(int *)(this + 0x28) + uVar2;
    uVar1 = param_2 - uVar2;
    if (uVar1 != 0) {
      Flush(this);
      iVar3 = uVar1 - uVar1 % *(uint *)(this + 0x20);
      (**(code **)(**(int **)(this + 0x24) + 0x3c))((int)param_1 + uVar2,iVar3);
      uVar1 = uVar1 - iVar3;
      if (*(int *)(this + 8) != 0) {
        (**(code **)(**(int **)(this + 0x24) + 0x54))
                  (1,*(undefined4 *)(this + 0x20),this + 0x30,this + 0x2c);
        *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 0x30);
      }
      if ((*(uint *)(this + 0x20) <= uVar1) || (*(void **)(this + 0x28) != *(void **)(this + 0x30)))
      {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      FUN_10004cd0(*(void **)(this + 0x28),uVar1,(void *)((int)param_1 + uVar2 + iVar3),uVar1);
      *(uint *)(this + 0x28) = *(int *)(this + 0x28) + uVar1;
    }
  }
  return;
}

