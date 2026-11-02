// rea decompile_all
// name: FUN_0046bb7c
// address: 0x46bb7c
// body: available
// range: 0x46bb7c-0x46bd66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046bb7c(int *param_1)

{
  short *psVar1;
  short *psVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  int unaff_EBX;
  int iVar8;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar8 = *(int *)param_1[2];
  iVar4 = *param_1;
  local_10 = ((int *)param_1[2])[3];
  *(undefined4 *)(unaff_EBX + 0x1450) = 0;
  iVar7 = 0;
  *(undefined4 *)(unaff_EBX + 0x1454) = 0x23d;
  if (0 < local_10) {
    do {
      if (*(short *)(iVar4 + iVar7 * 4) == 0) {
        *(undefined2 *)(iVar4 + 2 + iVar7 * 4) = 0;
      }
      else {
        *(int *)(unaff_EBX + 0x1450) = *(int *)(unaff_EBX + 0x1450) + 1;
        *(int *)(unaff_EBX + 0xb5c + *(int *)(unaff_EBX + 0x1450) * 4) = iVar7;
        *(undefined1 *)(iVar7 + 0x1458 + unaff_EBX) = 0;
        local_c = iVar7;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_10);
  }
  while (*(int *)(unaff_EBX + 0x1450) < 2) {
    if (local_c < 2) {
      iVar7 = local_c + 1;
      local_c = iVar7;
    }
    else {
      iVar7 = 0;
    }
    *(int *)(unaff_EBX + 0x1450) = *(int *)(unaff_EBX + 0x1450) + 1;
    *(int *)(unaff_EBX + 0xb5c + *(int *)(unaff_EBX + 0x1450) * 4) = iVar7;
    *(undefined2 *)(iVar7 * 4 + iVar4) = 1;
    *(undefined1 *)(unaff_EBX + 0x1458 + iVar7) = 0;
    *(int *)(unaff_EBX + 0x16a8) = *(int *)(unaff_EBX + 0x16a8) + -1;
    if (iVar8 != 0) {
      *(int *)(unaff_EBX + 0x16ac) =
           *(int *)(unaff_EBX + 0x16ac) - (uint)*(ushort *)(iVar7 * 4 + 2 + iVar8);
    }
  }
  param_1[1] = local_c;
  for (iVar8 = *(int *)(unaff_EBX + 0x1450) / 2; 0 < iVar8; iVar8 = iVar8 + -1) {
    FUN_0046b889(iVar8);
  }
  do {
    uVar5 = *(undefined4 *)(unaff_EBX + 0xb5c + *(int *)(unaff_EBX + 0x1450) * 4);
    iVar8 = *(int *)(unaff_EBX + 0xb60);
    *(int *)(unaff_EBX + 0x1450) = *(int *)(unaff_EBX + 0x1450) + -1;
    *(undefined4 *)(unaff_EBX + 0xb60) = uVar5;
    FUN_0046b889(1);
    *(int *)(unaff_EBX + 0x1454) = *(int *)(unaff_EBX + 0x1454) + -1;
    iVar7 = *(int *)(unaff_EBX + 0xb60);
    *(int *)(unaff_EBX + 0xb5c + *(int *)(unaff_EBX + 0x1454) * 4) = iVar8;
    *(int *)(unaff_EBX + 0x1454) = *(int *)(unaff_EBX + 0x1454) + -1;
    *(int *)(unaff_EBX + 0xb5c + *(int *)(unaff_EBX + 0x1454) * 4) = iVar7;
    psVar1 = (short *)(iVar4 + iVar7 * 4);
    psVar2 = (short *)(iVar4 + iVar8 * 4);
    *(short *)(iVar4 + local_10 * 4) = *psVar1 + *psVar2;
    bVar3 = *(byte *)(unaff_EBX + 0x1458 + iVar8);
    bVar6 = *(byte *)(unaff_EBX + 0x1458 + iVar7);
    if (bVar6 <= bVar3) {
      bVar6 = bVar3;
    }
    *(byte *)(unaff_EBX + 0x1458 + local_10) = bVar6 + 1;
    psVar1[1] = (short)local_10;
    psVar2[1] = (short)local_10;
    *(int *)(unaff_EBX + 0xb60) = local_10;
    local_10 = local_10 + 1;
    FUN_0046b889(1);
  } while (1 < *(int *)(unaff_EBX + 0x1450));
  *(int *)(unaff_EBX + 0x1454) = *(int *)(unaff_EBX + 0x1454) + -1;
  *(undefined4 *)(unaff_EBX + 0xb5c + *(int *)(unaff_EBX + 0x1454) * 4) =
       *(undefined4 *)(unaff_EBX + 0xb60);
  FUN_0046b939();
  FUN_0046bb05(local_c);
  return;
}

