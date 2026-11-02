// rea decompile_all
// name: FUN_004284ee
// address: 0x4284ee
// body: available
// range: 0x4284ee-0x4286a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004284ee(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_d8 [12];
  int local_cc;
  int local_a8;
  undefined4 local_9c;
  int local_94;
  int local_38;
  int local_28;
  int local_24;
  
  if (((*(int *)(param_1 + 0x70) != -1) && ((param_3 & 8) == 0)) &&
     (iVar1 = FUN_00428277(param_1,param_2,param_3), iVar1 == 0)) {
    if ((*(byte *)(*(int *)(unaff_EBX + 4) + 8) & 1) != 0) {
      FUN_0042832f(local_d8,param_1);
      FUN_00427a63(local_d8,param_2,0,1);
      *(undefined4 *)(unaff_EBX + 0x38) = local_9c;
      *(int *)(unaff_EBX + 0x3c) = (local_a8 - local_24) + local_28;
    }
    return 0;
  }
  if (((param_3 & 1) == 0) && (*(char *)(param_1 + 0x6c) == '\0')) {
    return 0x24;
  }
  if ((param_3 & 0x4000) != 0) {
    return 6;
  }
  iVar1 = FUN_0042832f(local_d8,param_1);
  if (iVar1 != 0) {
    return iVar1;
  }
  *(undefined4 *)(unaff_EBX + 0x48) = 0x6f75746c;
  *(undefined4 *)(unaff_EBX + 0x80) = 0;
  *(undefined4 *)(unaff_EBX + 0x7c) = 0;
  iVar1 = FUN_00427a63(local_d8,param_2,0,0);
  if (iVar1 != 0) goto LAB_00428689;
  if (*(int *)(unaff_EBX + 0x48) == 0x636f6d70) {
    *(undefined4 *)(unaff_EBX + 0x80) = *(undefined4 *)(local_cc + 0x30);
    *(undefined4 *)(unaff_EBX + 0x84) = *(undefined4 *)(local_cc + 0x34);
  }
  else {
    puVar3 = (undefined4 *)(local_cc + 0x14);
    puVar4 = (undefined4 *)(unaff_EBX + 0x6c);
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(uint *)(unaff_EBX + 0x7c) = *(uint *)(unaff_EBX + 0x7c) & 0xfffffdff;
    if (local_94 != 0) {
      FUN_00410751(-local_94,0);
    }
  }
  if ((param_3 & 2) == 0) {
    if (*(char *)(local_38 + 0x151) == '\0') {
LAB_00428676:
      *(uint *)(unaff_EBX + 0x7c) = *(uint *)(unaff_EBX + 0x7c) | 8;
    }
    else {
      iVar2 = *(int *)(local_38 + 0x154);
      if (iVar2 == 0) {
        *(uint *)(unaff_EBX + 0x7c) = *(uint *)(unaff_EBX + 0x7c) | 0x20;
      }
      else if (iVar2 != 1) {
        if (iVar2 == 4) {
          *(uint *)(unaff_EBX + 0x7c) = *(uint *)(unaff_EBX + 0x7c) | 0x30;
        }
        else {
          if (iVar2 != 5) goto LAB_00428676;
          *(uint *)(unaff_EBX + 0x7c) = *(uint *)(unaff_EBX + 0x7c) | 0x10;
        }
      }
    }
  }
  FUN_004280ae(local_d8,param_2);
LAB_00428689:
  if (((param_3 & 1) == 0) && (*(ushort *)(param_1 + 0xe) < 0x18)) {
    *(uint *)(unaff_EBX + 0x7c) = *(uint *)(unaff_EBX + 0x7c) | 0x100;
  }
  return iVar1;
}

