// rea decompile_all
// name: FUN_0041b3e0
// address: 0x41b3e0
// body: available
// range: 0x41b3e0-0x41b46b inclusive
// range: 0x41b470-0x41b4f4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041b3e0(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *in_ECX;
  int *in_EDX;
  int *piVar7;
  int *piVar8;
  
  piVar2 = in_ECX;
  if (in_ECX != in_EDX) {
    while (piVar2 = piVar2 + 1, piVar2 != in_EDX) {
      iVar1 = *piVar2;
      *piVar2 = (int)&DAT_00bfe12c;
      piVar4 = (int *)(*in_ECX + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
      }
      piVar4 = (int *)(iVar1 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
      }
      cVar3 = FUN_0041b940(iVar1);
      piVar7 = piVar2;
      if (cVar3 == '\0') {
        while( true ) {
          piVar8 = piVar7 + -1;
          piVar5 = (int *)(piVar7[-1] + -8);
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            *piVar5 = *piVar5 + 1;
            UNLOCK();
          }
          if (piVar4 != &DAT_00bfe124) {
            LOCK();
            *piVar4 = *piVar4 + 1;
            UNLOCK();
          }
          cVar3 = FUN_0041b940(iVar1);
          if (cVar3 == '\0') break;
          iVar6 = *piVar7;
          *piVar7 = *piVar8;
          *piVar8 = iVar6;
          piVar7 = piVar8;
        }
        iVar6 = *piVar7;
        *piVar7 = iVar1;
      }
      else {
        while (in_ECX != piVar7) {
          iVar6 = *piVar7;
          piVar4 = piVar7 + -1;
          *piVar7 = *piVar4;
          *piVar4 = iVar6;
          piVar7 = piVar4;
        }
        iVar6 = *in_ECX;
        *in_ECX = iVar1;
      }
      piVar4 = (int *)(iVar6 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
        }
      }
    }
  }
  return;
}

