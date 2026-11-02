// rea decompile_all
// name: FUN_00401dfe
// address: 0x401dfe
// body: available
// range: 0x401dfe-0x401ff4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00401dfe(void)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBX;
  int local_3d0;
  int local_3cc;
  uint local_3c8;
  int *local_3c4;
  int local_394 [19];
  undefined1 local_348 [8];
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_324;
  
  FUN_004014e3(*(undefined4 *)(in_EAX + 100));
  *(undefined4 *)(unaff_EBX + 0x30) = 0;
  *(undefined4 *)(unaff_EBX + 0x1bc) = 0;
  iVar2 = FUN_0040f9ab(0x6f);
  if (((iVar2 != 0) && (iVar2 = FUN_0040ddcc(iVar2,1), iVar2 == 0)) &&
     (0 < *(short *)(*(int *)(in_EAX + 0x54) + 0x6e))) {
    _memset(local_348,0,0x340);
    local_324 = *(undefined4 *)(unaff_EBX + 0x24);
    local_340 = 0x10000;
    local_33c = 0x10000;
    local_338 = 0;
    local_334 = 0;
    local_330 = 0;
    local_32c = 0;
    FUN_00401577();
    iVar2 = FUN_00401581(*(int *)(in_EAX + 0x54) + 0x6c);
    if (iVar2 == 0) {
      piVar6 = local_394;
      local_3d0 = 0;
      iVar2 = unaff_EBX + 0x28;
      do {
        local_3c8 = 0;
        iVar3 = FUN_00402583(local_3d0);
        if (iVar3 != 0) break;
        FUN_0040280a();
        uVar5 = piVar6[2];
        uVar4 = *piVar6 * 0x30 + uVar5;
        if (uVar5 < uVar4) {
          local_3c4 = (int *)(iVar2 + 0xc);
          do {
            uVar1 = *(uint *)(uVar5 + 0x14);
            if (((uVar1 != 0) && (*(uint *)(uVar1 + 0x14) == uVar5)) && (uVar5 < uVar1)) {
              iVar3 = (int)*(short *)(uVar5 + 2) - (int)*(short *)(uVar1 + 2);
              if (iVar3 < 0) {
                iVar3 = -iVar3;
              }
              if (local_3c8 < 0x10) {
                local_3c8 = local_3c8 + 1;
                *local_3c4 = iVar3;
                local_3c4 = local_3c4 + 3;
              }
            }
            uVar5 = uVar5 + 0x30;
          } while (uVar5 < uVar4);
        }
        FUN_00401066(local_3c8);
        local_3d0 = local_3d0 + 1;
        *(uint *)(iVar2 + 8) = local_3c8;
        piVar6 = piVar6 + 7;
        iVar2 = iVar2 + 0x18c;
      } while (local_3d0 < 2);
    }
  }
  local_3cc = 2;
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
    local_3cc = local_3cc + -1;
    piVar6[0x30] = iVar2 / 5;
    piVar6 = piVar6 + 99;
  } while (local_3cc != 0);
  FUN_004014f7();
  return;
}

