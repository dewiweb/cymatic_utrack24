// rea decompile_all
// name: FUN_0041d180
// address: 0x41d180
// body: available
// range: 0x41d180-0x41d20e inclusive
// range: 0x41d210-0x41d341 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041d180(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  int *piVar5;
  char cVar6;
  int *piVar7;
  byte *pbVar8;
  int *in_ECX;
  int iVar9;
  int *in_EDX;
  int *piVar10;
  byte *pbVar11;
  int iVar12;
  int *local_8;
  
  piVar5 = in_ECX;
  if (in_ECX != in_EDX) {
joined_r0x0041d1a3:
    piVar5 = piVar5 + 1;
    if (piVar5 != in_EDX) {
      pbVar4 = (byte *)*piVar5;
      *piVar5 = (int)&DAT_00bfe12c;
      piVar7 = (int *)(*in_ECX + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        *piVar7 = *piVar7 + 1;
        UNLOCK();
      }
      pbVar1 = pbVar4 + -8;
      if (pbVar1 != (byte *)&DAT_00bfe124) {
        LOCK();
        *(int *)pbVar1 = *(int *)pbVar1 + 1;
        UNLOCK();
      }
      cVar6 = FUN_0041dbc0(pbVar4);
      local_8 = piVar5;
      piVar7 = piVar5;
      if (cVar6 == '\0') {
        do {
          pbVar8 = pbVar4 + -8;
          piVar7 = local_8 + -1;
          pbVar11 = (byte *)*piVar7;
          pbVar1 = pbVar11 + -8;
          if (pbVar1 != (byte *)&DAT_00bfe124) {
            LOCK();
            *(int *)pbVar1 = *(int *)pbVar1 + 1;
            UNLOCK();
          }
          if (pbVar8 != (byte *)&DAT_00bfe124) {
            LOCK();
            *(int *)pbVar8 = *(int *)pbVar8 + 1;
            UNLOCK();
          }
          iVar12 = 0;
          pbVar8 = pbVar4;
          while( true ) {
            while( true ) {
              bVar3 = *pbVar8;
              pbVar8 = pbVar8 + 1;
              if (-1 < (char)bVar3) break;
              if ((*pbVar8 & 0xc0) != 0x80) goto LAB_0041d263;
              do {
                pbVar2 = pbVar8 + 1;
                pbVar8 = pbVar8 + 1;
              } while ((*pbVar2 & 0xc0) == 0x80);
              iVar12 = iVar12 + 1;
            }
            if (bVar3 == 0) break;
LAB_0041d263:
            iVar12 = iVar12 + 1;
          }
          iVar9 = 0;
          while( true ) {
            while( true ) {
              bVar3 = *pbVar11;
              pbVar11 = pbVar11 + 1;
              if (-1 < (char)bVar3) break;
              if ((*pbVar11 & 0xc0) != 0x80) goto LAB_0041d289;
              do {
                pbVar8 = pbVar11 + 1;
                pbVar11 = pbVar11 + 1;
              } while ((*pbVar8 & 0xc0) == 0x80);
              iVar9 = iVar9 + 1;
            }
            if (bVar3 == 0) break;
LAB_0041d289:
            iVar9 = iVar9 + 1;
          }
          if (iVar12 < iVar9) {
            iVar12 = 1;
          }
          else {
            iVar12 = (iVar12 <= iVar9) - 1;
          }
          pbVar11 = pbVar4 + -8;
          if (pbVar11 != (byte *)&DAT_00bfe124) {
            LOCK();
            iVar9 = *(int *)pbVar11;
            *(int *)pbVar11 = *(int *)pbVar11 + -1;
            UNLOCK();
            if (iVar9 == 0) {
              FID_conflict__free(pbVar11);
            }
          }
          if (pbVar1 != (byte *)&DAT_00bfe124) {
            LOCK();
            iVar9 = *(int *)pbVar1;
            *(int *)pbVar1 = *(int *)pbVar1 + -1;
            UNLOCK();
            if (iVar9 == 0) {
              FID_conflict__free(pbVar1);
            }
          }
          if (-1 < iVar12) goto LAB_0041d2fe;
          iVar12 = *local_8;
          *local_8 = *piVar7;
          *piVar7 = iVar12;
          local_8 = piVar7;
        } while( true );
      }
      while (in_ECX != piVar7) {
        iVar12 = *piVar7;
        piVar10 = piVar7 + -1;
        *piVar7 = *piVar10;
        *piVar10 = iVar12;
        piVar7 = piVar10;
      }
      iVar12 = *in_ECX;
      *in_ECX = (int)pbVar4;
      goto LAB_0041d30b;
    }
  }
  return;
LAB_0041d2fe:
  iVar12 = *local_8;
  *local_8 = (int)pbVar4;
LAB_0041d30b:
  piVar7 = (int *)(iVar12 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar12 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar12 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  goto joined_r0x0041d1a3;
}

