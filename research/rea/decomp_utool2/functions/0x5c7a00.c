// rea decompile_all
// name: FUN_005c7a00
// address: 0x5c7a00
// body: available
// range: 0x5c7a00-0x5c7b0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c7a00(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_ECX;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071ab00;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::MidiOutput::vftable;
  FUN_006322a0(5000);
  piVar4 = (int *)in_ECX[0x10];
  piVar3 = DAT_00c8a8b4;
  do {
    if (piVar3 == DAT_00c8a8b4 + DAT_00c8a8bc) {
LAB_005c7a7c:
      piVar4 = (int *)(in_ECX[0x18] + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x11));
      local_8 = 0;
      *in_ECX = juce::Thread::vftable;
      FUN_006322a0(0xffffffff);
      CloseHandle((HANDLE)in_ECX[0xb]);
      CloseHandle((HANDLE)in_ECX[10]);
      DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 4));
      piVar4 = (int *)(in_ECX[1] + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      ExceptionList = local_10;
      return;
    }
    if (piVar4 == (int *)*piVar3) {
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        midiOutClose((HMIDIOUT)piVar4[2]);
        FUN_004329f0(piVar4);
        FUN_004bfe14(piVar4,0xc,uVar2);
      }
      goto LAB_005c7a7c;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}

