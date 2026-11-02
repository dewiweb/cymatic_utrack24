// rea decompile_all
// name: FUN_0048af4b
// address: 0x48af4b
// body: available
// range: 0x48af4b-0x48b128 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048af4b(int param_1)

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
  int local_10;
  
  local_10 = 7;
  piVar1 = (int *)(param_1 + 8);
  do {
    iVar5 = piVar1[-2] + piVar1[5];
    iVar8 = piVar1[-2] - piVar1[5];
    iVar4 = piVar1[-1] + piVar1[4];
    iVar2 = piVar1[-1] - piVar1[4];
    iVar9 = piVar1[3] + *piVar1;
    iVar3 = *piVar1 - piVar1[3];
    iVar10 = piVar1[2] + piVar1[1];
    iVar7 = piVar1[2];
    iVar6 = iVar10 + iVar5;
    iVar5 = iVar5 - iVar10;
    iVar10 = iVar9 + iVar4;
    piVar1[-2] = iVar10 + iVar6;
    piVar1[2] = iVar6 - iVar10;
    iVar4 = ((iVar5 - iVar9) + iVar4) * 0xb5 >> 8;
    piVar1[4] = iVar5 - iVar4;
    iVar6 = iVar3 + (piVar1[1] - iVar7);
    *piVar1 = iVar4 + iVar5;
    iVar5 = iVar2 + iVar8;
    iVar4 = (iVar6 - iVar5) * 0x62 >> 8;
    iVar7 = (iVar6 * 0x8b >> 8) + iVar4;
    iVar4 = (iVar5 * 0x14e >> 8) + iVar4;
    iVar6 = (iVar3 + iVar2) * 0xb5 >> 8;
    iVar5 = iVar6 + iVar8;
    iVar8 = iVar8 - iVar6;
    piVar1[3] = iVar8 + iVar7;
    piVar1[1] = iVar8 - iVar7;
    piVar1[-1] = iVar5 + iVar4;
    piVar1[5] = iVar5 - iVar4;
    piVar1 = piVar1 + 8;
    local_10 = local_10 + -1;
  } while (-1 < local_10);
  local_10 = 7;
  piVar1 = (int *)(param_1 + 0x40);
  do {
    iVar5 = piVar1[-0x10] + piVar1[0x28];
    iVar8 = piVar1[-0x10] - piVar1[0x28];
    iVar4 = piVar1[-8] + piVar1[0x20];
    iVar2 = piVar1[-8] - piVar1[0x20];
    iVar9 = piVar1[0x18] + *piVar1;
    iVar3 = *piVar1 - piVar1[0x18];
    iVar10 = piVar1[0x10] + piVar1[8];
    iVar7 = piVar1[0x10];
    iVar6 = iVar10 + iVar5;
    iVar5 = iVar5 - iVar10;
    iVar10 = iVar9 + iVar4;
    piVar1[-0x10] = iVar10 + iVar6;
    piVar1[0x10] = iVar6 - iVar10;
    iVar4 = ((iVar5 - iVar9) + iVar4) * 0xb5 >> 8;
    piVar1[0x20] = iVar5 - iVar4;
    iVar6 = iVar3 + (piVar1[8] - iVar7);
    *piVar1 = iVar4 + iVar5;
    iVar5 = iVar2 + iVar8;
    iVar4 = (iVar6 - iVar5) * 0x62 >> 8;
    iVar7 = (iVar6 * 0x8b >> 8) + iVar4;
    iVar4 = (iVar5 * 0x14e >> 8) + iVar4;
    iVar6 = (iVar3 + iVar2) * 0xb5 >> 8;
    iVar5 = iVar6 + iVar8;
    iVar8 = iVar8 - iVar6;
    piVar1[0x18] = iVar8 + iVar7;
    piVar1[8] = iVar8 - iVar7;
    piVar1[-8] = iVar5 + iVar4;
    piVar1[0x28] = iVar5 - iVar4;
    piVar1 = piVar1 + 1;
    local_10 = local_10 + -1;
  } while (-1 < local_10);
  return;
}

