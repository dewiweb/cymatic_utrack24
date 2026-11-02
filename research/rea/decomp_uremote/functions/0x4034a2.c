// rea decompile_all
// name: FUN_004034a2
// address: 0x4034a2
// body: available
// range: 0x4034a2-0x40369c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004034a2(void)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBX;
  int local_360;
  int local_35c;
  uint local_358;
  int *local_354;
  int local_324 [19];
  undefined1 local_2d8 [8];
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b4;
  
  FUN_004014e3(*(undefined4 *)(in_EAX + 100));
  *(undefined4 *)(unaff_EBX + 0x30) = 0;
  *(undefined4 *)(unaff_EBX + 0x184) = 0;
  iVar2 = FUN_0040f9ab(30000);
  if (((iVar2 != 0) && (iVar2 = FUN_0040ddcc(iVar2,1), iVar2 == 0)) &&
     (0 < *(short *)(*(int *)(in_EAX + 0x54) + 0x6e))) {
    _memset(local_2d8,0,0x2d0);
    local_2b4 = *(undefined4 *)(unaff_EBX + 0x24);
    local_2d0 = 0x10000;
    local_2cc = 0x10000;
    local_2c8 = 0;
    local_2c4 = 0;
    local_2c0 = 0;
    local_2bc = 0;
    FUN_00401577();
    iVar2 = FUN_00401581(*(int *)(in_EAX + 0x54) + 0x6c);
    if (iVar2 == 0) {
      piVar6 = local_324;
      local_360 = 0;
      iVar2 = unaff_EBX + 0x28;
      do {
        local_358 = 0;
        iVar3 = FUN_00402583(local_360);
        if (iVar3 != 0) break;
        FUN_0040280a();
        uVar5 = piVar6[2];
        uVar4 = *piVar6 * 0x30 + uVar5;
        if (uVar5 < uVar4) {
          local_354 = (int *)(iVar2 + 0xc);
          do {
            uVar1 = *(uint *)(uVar5 + 0x14);
            if (((uVar1 != 0) && (*(uint *)(uVar1 + 0x14) == uVar5)) && (uVar5 < uVar1)) {
              iVar3 = (int)*(short *)(uVar5 + 2) - (int)*(short *)(uVar1 + 2);
              if (iVar3 < 0) {
                iVar3 = -iVar3;
              }
              if (local_358 < 0x10) {
                local_358 = local_358 + 1;
                *local_354 = iVar3;
                local_354 = local_354 + 3;
              }
            }
            uVar5 = uVar5 + 0x30;
          } while (uVar5 < uVar4);
        }
        FUN_00401066(local_358);
        local_360 = local_360 + 1;
        *(uint *)(iVar2 + 8) = local_358;
        piVar6 = piVar6 + 7;
        iVar2 = iVar2 + 0x154;
      } while (local_360 < 2);
    }
  }
  local_35c = 2;
  piVar6 = (int *)(unaff_EBX + 0x34);
  do {
    if (piVar6[-1] == 0) {
      iVar2 = *(int *)(unaff_EBX + 0x24) * 0x32;
      iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 0x7ffU)) >> 0xb;
    }
    else {
      iVar2 = *piVar6;
    }
    piVar6[0x31] = iVar2;
    *(undefined1 *)(piVar6 + 0x32) = 0;
    local_35c = local_35c + -1;
    piVar6[0x30] = iVar2 / 5;
    piVar6 = piVar6 + 0x55;
  } while (local_35c != 0);
  FUN_004014f7();
  return;
}

