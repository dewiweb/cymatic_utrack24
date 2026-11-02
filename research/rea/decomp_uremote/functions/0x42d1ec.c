// rea decompile_all
// name: FUN_0042d1ec
// address: 0x42d1ec
// body: available
// range: 0x42d1ec-0x42d342 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042d1ec(void)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 uVar7;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  iVar1 = *(int *)(in_EAX + 0x2c8);
  local_8 = *(undefined4 *)(in_EAX + 0x68);
  *(undefined1 *)(iVar1 + 0x10) = 1;
  iVar4 = (**(code **)(in_EAX + 0x1fc))();
  if ((iVar4 == 0) && (local_c = FUN_004111b5(), local_c == 0)) {
    iVar4 = FUN_004112c7();
    iVar5 = FUN_004112c7();
    if ((iVar4 == 0x10000) && (iVar5 == **(int **)(iVar1 + 8))) {
      puVar6 = (ushort *)FUN_00411976(8,0,&local_c);
      *(ushort **)(iVar1 + 0x14) = puVar6;
      if ((local_c == 0) && (local_10 = 0, 0 < iVar5)) {
LAB_0042d299:
        uVar2 = FUN_00411277();
        *puVar6 = uVar2;
        iVar4 = 0;
        uVar7 = FUN_00411976(8,0,&local_c);
        *(undefined4 *)(puVar6 + 2) = uVar7;
        if (local_c == 0) goto code_r0x0042d2c4;
        local_10 = local_10 + -1;
        while (-1 < local_10) {
          FUN_00411a5c(*(undefined4 *)(*(int *)(iVar1 + 0x14) + 4 + local_10 * 8));
          local_10 = local_10 + -1;
          *(undefined4 *)(*(int *)(iVar1 + 0x14) + 0xc + local_10 * 8) = 0;
        }
        FUN_00411a5c(*(undefined4 *)(iVar1 + 0x14));
        *(undefined4 *)(iVar1 + 0x14) = 0;
      }
    }
LAB_0042d336:
    FUN_00411249();
  }
  return;
code_r0x0042d2c4:
  if (*puVar6 != 0) {
    do {
      sVar3 = FUN_00411277();
      *(int *)(*(int *)(puVar6 + 2) + iVar4 * 8) = (int)sVar3 << 2;
      sVar3 = FUN_00411277();
      *(int *)(*(int *)(puVar6 + 2) + 4 + iVar4 * 8) = (int)sVar3 << 2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*puVar6);
  }
  local_10 = local_10 + 1;
  puVar6 = puVar6 + 4;
  if (iVar5 <= local_10) goto LAB_0042d336;
  goto LAB_0042d299;
}

