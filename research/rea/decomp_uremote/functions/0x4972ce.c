// rea decompile_all
// name: FUN_004972ce
// address: 0x4972ce
// body: available
// range: 0x4972ce-0x4974d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4972e4 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004972ce(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  int in_EAX;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  char *pcVar15;
  int local_10;
  char *local_c;
  
  if ((*(uint *)(param_1 + 0x28) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00491122();
  }
  if ((*(uint *)(param_1 + 0x28) & 4) == 0) {
    if ((param_2 == 0) || ((*(uint *)(param_2 + 8) & 0x400) == 0)) {
      pcVar11 = (char *)FUN_00495b75(2);
      if (pcVar11 == (char *)0x0) {
        FUN_00495a5d();
      }
      else {
        FUN_00495a35(pcVar11);
        iVar12 = FUN_00495a5d();
        if (iVar12 != 0) {
          return;
        }
        pcVar15 = pcVar11 + in_EAX;
        *pcVar15 = '\0';
        cVar1 = *pcVar11;
        pcVar13 = pcVar11;
        while (cVar1 != '\0') {
          pcVar13 = pcVar13 + 1;
          cVar1 = *pcVar13;
        }
        if (pcVar13 + 0xc < pcVar15) {
          cVar1 = pcVar13[1];
          cVar2 = pcVar13[2];
          cVar3 = pcVar13[3];
          cVar4 = pcVar13[4];
          bVar5 = pcVar13[10];
          cVar6 = pcVar13[5];
          cVar7 = pcVar13[6];
          cVar8 = pcVar13[7];
          cVar9 = pcVar13[8];
          bVar10 = pcVar13[9];
          pcVar13 = pcVar13 + 0xb;
          if ((((bVar10 != 0) || (bVar5 == 2)) && ((bVar10 != 1 || (bVar5 == 3)))) &&
             ((bVar10 != 2 || (bVar5 == 3)))) {
            local_c = pcVar13;
            if (bVar10 == 3) {
              if (bVar5 != 4) goto LAB_004974cb;
            }
            else if (3 < bVar10) {
              FUN_004914ad();
            }
            for (; *local_c != '\0'; local_c = local_c + 1) {
            }
            uVar14 = (uint)bVar5;
            iVar12 = FUN_0049176b();
            if (iVar12 != 0) {
              local_10 = 0;
              if (uVar14 != 0) {
                do {
                  local_c = local_c + 1;
                  *(char **)(iVar12 + local_10 * 4) = local_c;
                  if (pcVar15 < local_c) {
LAB_004974bb:
                    FUN_00491789(param_1,iVar12);
                    goto LAB_004974cb;
                  }
                  do {
                    if (*local_c == '\0') break;
                    local_c = local_c + 1;
                  } while (local_c <= pcVar15);
                  if (pcVar15 < local_c) goto LAB_004974bb;
                  local_10 = local_10 + 1;
                } while (local_10 < (int)uVar14);
              }
              FUN_00498e49(param_1,pcVar11,CONCAT31(CONCAT21(CONCAT11(cVar1,cVar2),cVar3),cVar4),
                           CONCAT31(CONCAT21(CONCAT11(cVar6,cVar7),cVar8),cVar9),bVar10,uVar14,
                           pcVar13,iVar12);
              FUN_00491789(param_1,iVar12);
              return;
            }
          }
        }
      }
LAB_004974cb:
      FUN_004914ad();
      return;
    }
    FUN_00495a5d();
  }
  else {
    FUN_00495a5d();
  }
  FUN_004914ad();
  return;
}

