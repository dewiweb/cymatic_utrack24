// rea decompile_all
// name: FUN_0047fba0
// address: 0x47fba0
// body: available
// range: 0x47fba0-0x47fd88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0047fba0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int local_20;
  int local_1c;
  int local_18;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0xe0);
  uVar10 = *(int *)(param_1 + 0xf8) - 1;
  iVar2 = *(int *)(param_1 + 0x148);
  iVar9 = *(int *)(iVar2 + 0x10);
  do {
    if (*(int *)(iVar2 + 0x14) <= iVar9) {
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
      FUN_0047fad2();
      return 1;
    }
    for (uVar3 = *(uint *)(iVar2 + 0xc); uVar3 <= uVar10; uVar3 = uVar3 + 1) {
      iVar12 = 0;
      local_20 = 0;
      if (0 < *(int *)(param_1 + 0xe4)) {
        piVar13 = (int *)(param_1 + 0xe8);
        do {
          iVar4 = *piVar13;
          if (uVar3 < uVar10) {
            iVar11 = *(int *)(iVar4 + 0x34);
          }
          else {
            iVar11 = *(int *)(iVar4 + 0x44);
          }
          local_18 = 0;
          iVar5 = *(int *)(iVar4 + 0x40);
          local_1c = iVar9 << 3;
          if (0 < *(int *)(iVar4 + 0x38)) {
            iVar7 = *(int *)(iVar4 + 0x34);
            do {
              if ((*(uint *)(iVar2 + 8) < iVar1 - 1U) || (local_18 + iVar9 < *(int *)(iVar4 + 0x48))
                 ) {
                (**(code **)(*(int *)(param_1 + 0x158) + 4))
                          (param_1,iVar4,*(undefined4 *)(param_2 + *(int *)(iVar4 + 4) * 4),
                           *(undefined4 *)(iVar2 + 0x18 + iVar12 * 4),local_1c,iVar5 * uVar3,iVar11)
                ;
                if ((iVar11 < *(int *)(iVar4 + 0x34)) &&
                   (FUN_0048e721(*(undefined4 *)(iVar2 + 0x18 + (iVar11 + iVar12) * 4),
                                 (*(int *)(iVar4 + 0x34) - iVar11) * 0x80),
                   iVar11 < *(int *)(iVar4 + 0x34))) {
                  puVar8 = (undefined4 *)(iVar2 + 0x18 + (iVar11 + iVar12) * 4);
                  local_8 = iVar11;
                  do {
                    local_8 = local_8 + 1;
                    *(undefined2 *)*puVar8 = *(undefined2 *)puVar8[-1];
                    puVar8 = puVar8 + 1;
                  } while (local_8 < *(int *)(iVar4 + 0x34));
                }
              }
              else {
                FUN_0048e721(*(undefined4 *)(iVar2 + 0x18 + iVar12 * 4),iVar7 << 7);
                local_8 = 0;
                if (0 < *(int *)(iVar4 + 0x34)) {
                  puVar8 = (undefined4 *)(iVar2 + 0x18 + iVar12 * 4);
                  do {
                    local_8 = local_8 + 1;
                    *(undefined2 *)*puVar8 = **(undefined2 **)(iVar2 + 0x14 + iVar12 * 4);
                    puVar8 = puVar8 + 1;
                  } while (local_8 < *(int *)(iVar4 + 0x34));
                }
              }
              iVar7 = *(int *)(iVar4 + 0x34);
              local_1c = local_1c + 8;
              iVar12 = iVar12 + iVar7;
              local_18 = local_18 + 1;
            } while (local_18 < *(int *)(iVar4 + 0x38));
          }
          local_20 = local_20 + 1;
          piVar13 = piVar13 + 1;
        } while (local_20 < *(int *)(param_1 + 0xe4));
      }
      cVar6 = (**(code **)(*(int *)(param_1 + 0x15c) + 4))(param_1,iVar2 + 0x18);
      if (cVar6 == '\0') {
        *(int *)(iVar2 + 0x10) = iVar9;
        *(uint *)(iVar2 + 0xc) = uVar3;
        return 0;
      }
    }
    *(undefined4 *)(iVar2 + 0xc) = 0;
    iVar9 = iVar9 + 1;
  } while( true );
}

