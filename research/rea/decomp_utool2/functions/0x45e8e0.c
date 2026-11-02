// rea decompile_all
// name: FUN_0045e8e0
// address: 0x45e8e0
// body: available
// range: 0x45e8e0-0x45e96a inclusive
// range: 0x45e970-0x45ea4d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045e8e0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int *in_ECX;
  int *piVar7;
  int *piVar8;
  int *in_EDX;
  int *piVar9;
  
  piVar3 = in_ECX;
  if (in_ECX != in_EDX) {
    while (piVar3 = piVar3 + 1, piVar3 != in_EDX) {
      iVar2 = *piVar3;
      *piVar3 = (int)&DAT_00bfe12c;
      piVar5 = (int *)(*in_ECX + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
      piVar5 = (int *)(iVar2 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
      cVar4 = FUN_0045fae0(iVar2);
      piVar5 = piVar3;
      if (cVar4 == '\0') {
        while( true ) {
          iVar6 = piVar5[-1];
          piVar9 = piVar5 + -1;
          piVar7 = (int *)(iVar6 + -8);
          if (piVar7 != &DAT_00bfe124) {
            LOCK();
            *piVar7 = *piVar7 + 1;
            UNLOCK();
          }
          piVar8 = (int *)(iVar2 + -8);
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            *piVar8 = *piVar8 + 1;
            UNLOCK();
          }
          if (iVar2 == iVar6) {
            iVar6 = 0;
          }
          else {
            iVar6 = FUN_0045c1e0(iVar2);
          }
          piVar8 = (int *)(iVar2 + -8);
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            iVar1 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              FID_conflict__free(piVar8);
            }
          }
          if (piVar7 != &DAT_00bfe124) {
            LOCK();
            iVar1 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              FID_conflict__free(piVar7);
            }
          }
          if (-1 < iVar6) break;
          iVar6 = *piVar5;
          *piVar5 = *piVar9;
          *piVar9 = iVar6;
          piVar5 = piVar9;
        }
        iVar6 = *piVar5;
        *piVar5 = iVar2;
      }
      else {
        while (in_ECX != piVar5) {
          iVar6 = *piVar5;
          piVar7 = piVar5 + -1;
          *piVar5 = *piVar7;
          *piVar7 = iVar6;
          piVar5 = piVar7;
        }
        iVar6 = *in_ECX;
        *in_ECX = iVar2;
      }
      piVar5 = (int *)(iVar6 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar5);
        }
      }
    }
  }
  return;
}

