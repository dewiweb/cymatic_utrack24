// rea decompile_all
// name: AFXPlaySystemSound
// address: 0x10098bf0
// body: available
// range: 0x10098bf0-0x10098cbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10098c61 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    void __cdecl AFXPlaySystemSound(int)
   
   Library: Visual Studio 2010 Release */

void __cdecl AFXPlaySystemSound(int param_1)

{
  uintptr_t uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 uStackY_28;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  local_8 = 0x10098bfc;
  puVar4 = auStack_20;
  if (DAT_10160df4 != 0) {
    if (DAT_101619f8 == -2) {
      if (param_1 != -1) {
        if ((DAT_10168c08 & 1) == 0) {
          DAT_10168c08 = DAT_10168c08 | 1;
          local_8 = 0;
          CCriticalSection::CCriticalSection((CCriticalSection *)&DAT_10168be8);
          uStackY_28 = 0x10098c48;
          _atexit((_func_4879 *)&LAB_1011adf3);
          local_8 = 0xffffffff;
        }
        puVar2 = &uStackY_28;
        uStackY_28 = 0x10098c59;
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10168bf0);
        if (DAT_10168be4 != 0) {
                    /* WARNING: Subroutine does not return */
          puVar2[-1] = 0x10098c66;
          FUN_10009068();
        }
        puVar2[-1] = 0;
        puVar2[-2] = 0;
        puVar2[-3] = &LAB_10098b98;
        puVar2[-4] = 0x10098c72;
        uVar1 = __beginthread((_StartAddress *)puVar2[-3],puVar2[-2],(void *)puVar2[-1]);
        if ((uVar1 == 0) || (uVar1 == 0xffffffff)) {
          DAT_10168be4 = 0;
        }
        else {
          DAT_10168be4 = uVar1;
          puVar2[-1] = 0xffffffff;
          puVar2[-2] = uVar1;
          puVar3 = puVar2 + -3;
          puVar2[-3] = 0x10098c8c;
          SetThreadPriority((HANDLE)puVar2[-2],puVar2[-1]);
          DAT_101619f8 = param_1;
          puVar2 = puVar3;
        }
        *(undefined **)((int)puVar2 + -4) = &DAT_10168bf0;
        puVar4 = (undefined1 *)((int)puVar2 + -8);
        *(undefined4 *)((int)puVar2 + -8) = 0x10098ca3;
        LeaveCriticalSection(*(LPCRITICAL_SECTION *)((int)puVar2 + -4));
      }
    }
    else {
      DAT_101619f8 = param_1;
      if (param_1 == -1) {
        DAT_10168be4 = 0;
      }
    }
  }
  *(undefined4 *)(puVar4 + -4) = 0x10098cbd;
  return;
}

