// rea decompile_all
// name: FUN_0061c920
// address: 0x61c920
// body: available
// range: 0x61c920-0x61cb76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061c920(int *param_1)

{
  int *piVar1;
  int *_Memory;
  int *_Memory_00;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  int local_1c;
  int local_18;
  int local_14;
  
  piVar1 = (int *)(in_ECX + 4);
  iVar5 = FUN_00443260();
  if (iVar5 == 0) {
    *(undefined1 *)(in_ECX + 8) = 1;
    iVar7 = 0;
    do {
      *piVar1 = *piVar1 + -1;
      if ((*(byte *)*piVar1 & 0xc0) != 0x80) break;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
  }
  if (*(char *)(in_ECX + 8) != '\0') {
    return;
  }
  do {
    iVar7 = FUN_00443260();
    if (iVar7 == 0) {
      *(undefined1 *)(in_ECX + 8) = 1;
      iVar8 = 0;
      do {
        *piVar1 = *piVar1 + -1;
        if ((*(byte *)*piVar1 & 0xc0) != 0x80) break;
        iVar8 = iVar8 + 1;
      } while (iVar8 < 4);
    }
    if (iVar7 == iVar5) {
      return;
    }
    iVar8 = 0;
    do {
      *piVar1 = *piVar1 + -1;
      if ((*(byte *)*piVar1 & 0xc0) != 0x80) break;
      iVar8 = iVar8 + 1;
    } while (iVar8 < 4);
    if (iVar7 == 0x26) {
      FUN_0061b8d0(param_1);
    }
    else {
      iVar7 = *piVar1;
LAB_0061c9c8:
      iVar8 = FUN_00426f70();
      if (iVar8 == iVar5) {
        iVar5 = *piVar1 - iVar7;
        if (0 < iVar5) {
          pcVar4 = (char *)*param_1;
          pcVar10 = pcVar4;
          do {
            cVar3 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar3 != '\0');
          FUN_00455850(pcVar4);
          *param_1 = local_1c;
          FUN_004c2c30(pcVar10 + (local_1c - (int)(pcVar4 + 1)),iVar7,iVar5);
          (pcVar10 + (local_1c - (int)(pcVar4 + 1)))[iVar5] = '\0';
        }
        bVar2 = *(byte *)*piVar1;
        pbVar9 = (byte *)*piVar1 + 1;
        *piVar1 = (int)pbVar9;
        if ((char)bVar2 < '\0') {
          uVar6 = 0x40;
          if ((bVar2 & 0x40) == 0) {
            return;
          }
          do {
            if (uVar6 < 9) {
              return;
            }
            pbVar9 = pbVar9 + 1;
            uVar6 = uVar6 >> 1;
            *piVar1 = (int)pbVar9;
          } while ((uVar6 & (int)(char)bVar2) != 0);
          return;
        }
        return;
      }
      if (iVar8 == 0x26) {
        local_1c = *piVar1 - iVar7;
        if (0 < local_1c) {
          pcVar4 = (char *)*param_1;
          pcVar10 = pcVar4;
          do {
            cVar3 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar3 != '\0');
          FUN_00455850(pcVar4);
          *param_1 = local_18;
          FUN_004c2c30(pcVar10 + (local_18 - (int)(pcVar4 + 1)),iVar7,local_1c);
          (pcVar10 + (local_18 - (int)(pcVar4 + 1)))[local_1c] = '\0';
        }
        goto LAB_0061cadb;
      }
      if (iVar8 != 0) {
        bVar2 = *(byte *)*piVar1;
        pbVar9 = (byte *)*piVar1 + 1;
        *piVar1 = (int)pbVar9;
        if ((char)bVar2 < '\0') {
          uVar6 = 0x40;
          if ((bVar2 & 0x40) != 0) {
            do {
              if (uVar6 < 9) break;
              pbVar9 = pbVar9 + 1;
              uVar6 = uVar6 >> 1;
              *piVar1 = (int)pbVar9;
            } while ((uVar6 & (int)(char)bVar2) != 0);
          }
        }
        goto LAB_0061c9c8;
      }
      FUN_0045c990("unmatched quotes");
      _Memory = (int *)(local_14 + -8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        *_Memory = *_Memory + 1;
        UNLOCK();
      }
      LOCK();
      iVar7 = *(int *)(in_ECX + 0xc);
      *(int *)(in_ECX + 0xc) = local_14;
      UNLOCK();
      _Memory_00 = (int *)(iVar7 + -8);
      if (_Memory_00 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *_Memory_00;
        *_Memory_00 = *_Memory_00 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(_Memory_00);
        }
      }
      *(undefined1 *)(in_ECX + 9) = 1;
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar7 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(_Memory);
        }
      }
      *(undefined1 *)(in_ECX + 8) = 1;
    }
LAB_0061cadb:
    if (*(char *)(in_ECX + 8) != '\0') {
      return;
    }
  } while( true );
}

