// rea decompile_all
// name: FUN_0045f170
// address: 0x45f170
// body: available
// range: 0x45f170-0x45f1fa inclusive
// range: 0x45f200-0x45f301 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045f170(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int *in_ECX;
  int *piVar6;
  int *in_EDX;
  int *piVar7;
  int iVar8;
  int *local_8;
  
  piVar2 = in_ECX;
  if (in_ECX != in_EDX) {
joined_r0x0045f193:
    piVar2 = piVar2 + 1;
    if (piVar2 != in_EDX) {
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
      cVar3 = FUN_0045fd20(iVar1);
      local_8 = piVar2;
      piVar4 = piVar2;
      if (cVar3 == '\0') {
        do {
          iVar5 = local_8[-1];
          piVar7 = local_8 + -1;
          piVar4 = (int *)(iVar5 + -8);
          if (piVar4 != &DAT_00bfe124) {
            LOCK();
            *piVar4 = *piVar4 + 1;
            UNLOCK();
          }
          piVar6 = (int *)(iVar1 + -8);
          if (piVar6 != &DAT_00bfe124) {
            LOCK();
            *piVar6 = *piVar6 + 1;
            UNLOCK();
          }
          if (iVar1 == iVar5) {
            iVar8 = 0;
          }
          else {
            do {
              iVar5 = FUN_00443260();
              iVar8 = FUN_00443260();
              if ((iVar5 - iVar8 != 0) &&
                 (iVar8 = (iVar5 - iVar8 >> 0x1f & 0xfffffffeU) + 1, iVar8 != 0)) goto LAB_0045f265;
            } while (iVar5 != 0);
            iVar8 = 0;
          }
LAB_0045f265:
          piVar6 = (int *)(iVar1 + -8);
          if (piVar6 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(piVar6);
            }
          }
          if (piVar4 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(piVar4);
            }
          }
          if (-1 < iVar8) goto LAB_0045f2be;
          iVar5 = *local_8;
          *local_8 = *piVar7;
          *piVar7 = iVar5;
          local_8 = piVar7;
        } while( true );
      }
      while (in_ECX != piVar4) {
        iVar5 = *piVar4;
        piVar7 = piVar4 + -1;
        *piVar4 = *piVar7;
        *piVar7 = iVar5;
        piVar4 = piVar7;
      }
      iVar5 = *in_ECX;
      *in_ECX = iVar1;
      goto LAB_0045f2cb;
    }
  }
  return;
LAB_0045f2be:
  iVar5 = *local_8;
  *local_8 = iVar1;
LAB_0045f2cb:
  piVar4 = (int *)(iVar5 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  goto joined_r0x0045f193;
}

