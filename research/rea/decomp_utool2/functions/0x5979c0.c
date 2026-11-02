// rea decompile_all
// name: FUN_005979c0
// address: 0x5979c0
// body: available
// range: 0x5979c0-0x597c35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005979c0(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  int unaff_EBX;
  undefined1 local_11;
  int local_10;
  int local_c;
  
  *(undefined4 *)(in_ECX + 0x22c0) = 0;
  *(undefined4 *)(in_ECX + 0x22c4) = 0;
  *(undefined4 *)(in_ECX + 0x22c8) = 0;
  *(undefined4 *)(in_ECX + 0x22cc) = 0;
  local_10 = 0;
  *(undefined1 *)(in_ECX + 0x22e2) = 0;
  local_11 = 0;
  local_c = in_ECX;
  uVar2 = FUN_006e85c0();
  uVar3 = 0;
  if ((*(byte *)(local_c + 0x1010) & 2) != 0) {
    uVar3 = uVar2;
  }
  FUN_00595b20(local_c + 0x22e8,uVar3,2,(undefined4 *)(in_ECX + 0x22c0),
               (undefined4 *)(in_ECX + 0x22c8),&local_10,(undefined1 *)(in_ECX + 0x22e2),&local_11);
  *(undefined1 *)(local_c + 0x22e1) = 0;
  if (local_10 < 2) {
    (**(code **)(*(int *)(local_c + 0xed8) + 0x28))(0);
    (**(code **)(*(int *)(local_c + 0xfa8) + 0x28))(0);
    FUN_006e83a0(1,3);
    *(undefined1 *)(local_c + 0x22e1) = 1;
    FUN_00598140();
    return;
  }
  (**(code **)(*(int *)(local_c + 0xed8) + 0x28))(1);
  (**(code **)(*(int *)(local_c + 0xfa8) + 0x28))(1);
  iVar4 = *(int *)(local_c + 0x1038) + -1;
  if (-1 < iVar4) {
    piVar5 = (int *)(*(int *)(local_c + 0x1030) + iVar4 * 4);
    do {
      if (*(int *)(*piVar5 + 4) == 1) {
        iVar4 = *(int *)(*(int *)(local_c + 0x1030) + iVar4 * 4);
        if (iVar4 != 0) {
          *(byte *)(iVar4 + 8) = *(byte *)(iVar4 + 8) & 0xfe | 0 < unaff_EBX;
        }
        break;
      }
      piVar5 = piVar5 + -1;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  iVar4 = *(int *)(local_c + 0x1038) + -1;
  if (-1 < iVar4) {
    piVar5 = (int *)(*(int *)(local_c + 0x1030) + iVar4 * 4);
    do {
      if (*(int *)(*piVar5 + 4) == 2) {
        iVar4 = *(int *)(*(int *)(local_c + 0x1030) + iVar4 * 4);
        if (iVar4 != 0) {
          *(byte *)(iVar4 + 8) = *(byte *)(iVar4 + 8) & 0xfe | 1 < unaff_EBX;
        }
        break;
      }
      piVar5 = piVar5 + -1;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  iVar4 = *(int *)(local_c + 0x1038) + -1;
  if (-1 < iVar4) {
    piVar5 = (int *)(*(int *)(local_c + 0x1030) + iVar4 * 4);
    do {
      if (*(int *)(*piVar5 + 4) == 3) {
        iVar4 = *(int *)(*(int *)(local_c + 0x1030) + iVar4 * 4);
        if (iVar4 != 0) {
          *(byte *)(iVar4 + 8) = *(byte *)(iVar4 + 8) & 0xfe | 2 < unaff_EBX;
        }
        break;
      }
      piVar5 = piVar5 + -1;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  iVar4 = *(int *)(local_c + 0x1038) + -1;
  if (-1 < iVar4) {
    piVar5 = (int *)(*(int *)(local_c + 0x1030) + iVar4 * 4);
    do {
      if (*(int *)(*piVar5 + 4) == 4) {
        iVar4 = *(int *)(*(int *)(local_c + 0x1030) + iVar4 * 4);
        if (iVar4 != 0) {
          *(byte *)(iVar4 + 8) = *(byte *)(iVar4 + 8) & 0xfe | 3 < unaff_EBX;
        }
        break;
      }
      piVar5 = piVar5 + -1;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  if (*(char *)(local_c + 0x1074) == '\0') {
    iVar4 = *(int *)(local_c + 0xd4);
    cVar1 = FUN_006d2530(*(undefined4 *)(iVar4 + 800));
    if (cVar1 != '\0') {
      *(undefined1 *)(local_c + 0x1074) = 1;
      FUN_006e83a0(*(undefined4 *)(iVar4 + 800),3);
      piVar5 = (int *)(*(int *)(local_c + 0xd4) + 800);
      *piVar5 = *piVar5 + 1;
    }
  }
  iVar4 = FUN_006e85c0();
  *(bool *)(local_c + 0x22e1) = iVar4 <= unaff_EBX;
  FUN_00598140();
  return;
}

