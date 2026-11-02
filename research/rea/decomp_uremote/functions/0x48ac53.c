// rea decompile_all
// name: FUN_0048ac53
// address: 0x48ac53
// body: available
// range: 0x48ac53-0x48af4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048ac53(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_18;
  
  local_18 = 7;
  piVar1 = (int *)(param_1 + 8);
  do {
    iVar3 = piVar1[-2] + piVar1[5];
    iVar6 = piVar1[-2] - piVar1[5];
    iVar4 = piVar1[-1] + piVar1[4];
    iVar9 = piVar1[-1] - piVar1[4];
    iVar5 = piVar1[3] + *piVar1;
    iVar10 = *piVar1 - piVar1[3];
    iVar7 = piVar1[2] + piVar1[1];
    iVar2 = piVar1[1] - piVar1[2];
    iVar8 = iVar7 + iVar3;
    iVar3 = iVar3 - iVar7;
    iVar7 = iVar5 + iVar4;
    iVar4 = iVar4 - iVar5;
    piVar1[-2] = (iVar7 + iVar8) * 4;
    piVar1[2] = (iVar8 - iVar7) * 4;
    iVar5 = (iVar4 + iVar3) * 0x1151;
    *piVar1 = iVar3 * 0x187e + 0x400 + iVar5 >> 0xb;
    piVar1[4] = iVar5 + iVar4 * -0x3b21 + 0x400 >> 0xb;
    iVar3 = (iVar10 + iVar6 + iVar2 + iVar9) * 0x25a1;
    iVar4 = (iVar2 + iVar6) * -0x1ccd;
    iVar5 = (iVar10 + iVar9) * -0x5203;
    iVar7 = iVar3 + (iVar2 + iVar9) * -0x3ec5;
    iVar3 = iVar3 + (iVar10 + iVar6) * -0xc7c;
    piVar1[5] = iVar2 * 0x98e + iVar7 + 0x400 + iVar4 >> 0xb;
    piVar1[1] = iVar9 * 0x6254 + iVar7 + 0x400 + iVar5 >> 0xb;
    piVar1[3] = iVar10 * 0x41b3 + iVar3 + 0x400 + iVar5 >> 0xb;
    piVar1[-1] = iVar6 * 0x300b + iVar3 + 0x400 + iVar4 >> 0xb;
    piVar1 = piVar1 + 8;
    local_18 = local_18 + -1;
  } while (-1 < local_18);
  local_18 = 7;
  piVar1 = (int *)(param_1 + 0x40);
  do {
    iVar3 = piVar1[-0x10] + piVar1[0x28];
    iVar6 = piVar1[-0x10] - piVar1[0x28];
    iVar4 = piVar1[-8] + piVar1[0x20];
    iVar9 = piVar1[-8] - piVar1[0x20];
    iVar5 = piVar1[0x18] + *piVar1;
    iVar10 = *piVar1 - piVar1[0x18];
    iVar7 = piVar1[0x10] + piVar1[8];
    iVar2 = piVar1[8] - piVar1[0x10];
    iVar8 = iVar7 + iVar3;
    iVar3 = iVar3 - iVar7;
    iVar7 = iVar5 + iVar4;
    iVar4 = iVar4 - iVar5;
    piVar1[-0x10] = iVar7 + 2 + iVar8 >> 2;
    piVar1[0x10] = (iVar8 - iVar7) + 2 >> 2;
    iVar5 = (iVar4 + iVar3) * 0x1151;
    *piVar1 = iVar3 * 0x187e + 0x4000 + iVar5 >> 0xf;
    piVar1[0x20] = iVar5 + iVar4 * -0x3b21 + 0x4000 >> 0xf;
    iVar3 = (iVar10 + iVar6 + iVar2 + iVar9) * 0x25a1;
    iVar4 = (iVar2 + iVar6) * -0x1ccd;
    iVar5 = (iVar10 + iVar9) * -0x5203;
    iVar7 = iVar3 + (iVar2 + iVar9) * -0x3ec5;
    iVar3 = iVar3 + (iVar10 + iVar6) * -0xc7c;
    piVar1[0x28] = iVar2 * 0x98e + iVar7 + 0x4000 + iVar4 >> 0xf;
    piVar1[8] = iVar9 * 0x6254 + iVar7 + 0x4000 + iVar5 >> 0xf;
    piVar1[0x18] = iVar10 * 0x41b3 + iVar3 + 0x4000 + iVar5 >> 0xf;
    piVar1[-8] = iVar6 * 0x300b + iVar3 + 0x4000 + iVar4 >> 0xf;
    piVar1 = piVar1 + 1;
    local_18 = local_18 + -1;
  } while (-1 < local_18);
  return;
}

