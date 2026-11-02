// rea decompile_all
// name: FUN_00421263
// address: 0x421263
// body: available
// range: 0x421263-0x42172c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00421263(int *param_1,uint *param_2,char param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char *local_38;
  char *local_34;
  char *local_2c;
  char *local_28;
  uint local_24;
  uint local_1c;
  uint local_18;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_18 = *param_2;
  uVar8 = 0;
  uVar3 = CONCAT11(*(undefined1 *)(param_1[4] + 6),*(undefined1 *)(param_1[4] + 7));
  uVar7 = uVar3 & 0xfffffffe;
  if ((uVar3 & 0xfffe) == 0) {
    return 0;
  }
  uVar9 = (uint)(uVar3 >> 1);
  local_1c = 0xffff;
  if (param_3 != '\0') {
    local_18 = local_18 + 1;
  }
  local_2c = (char *)0x0;
  uVar10 = 0;
  local_c = uVar9;
  if (uVar9 != 0) {
    do {
      uVar10 = local_c + (int)local_2c >> 1;
      puVar4 = (undefined1 *)(param_1[4] + 0xe + uVar10 * 2);
      local_1c = (uint)CONCAT11(*puVar4,puVar4[1]);
      puVar4 = puVar4 + uVar7 + 2;
      local_24 = (uint)CONCAT11(*puVar4,puVar4[1]);
      uVar12 = uVar10;
      if (local_24 <= local_18) {
        if (local_18 <= local_1c) {
          local_28 = puVar4 + uVar7;
          uVar12 = (int)(short)((short)*local_28 << 8) | (uint)(byte)local_28[1];
          local_28 = local_28 + uVar7;
          uVar8 = (uint)CONCAT11(*local_28,local_28[1]);
          if ((((uVar9 - 1 <= uVar10) && (local_24 == 0xffff)) && (local_1c == 0xffff)) &&
             ((uVar8 != 0 &&
              ((char *)(*(int *)(*param_1 + 0x1f8) + *(int *)(*param_1 + 500)) <
               local_28 + uVar8 + 2)))) {
            uVar12 = 1;
            uVar8 = 0;
          }
          local_8 = uVar10;
          if ((*(byte *)(param_1 + 5) & 2) == 0) {
            if (uVar8 != 0xffff) goto LAB_004216ad;
            goto LAB_00421614;
          }
          local_10 = uVar10;
          if (uVar8 == 0xffff) {
            local_10 = uVar10 + 1;
          }
          pcVar5 = local_28;
          if (uVar10 == 0) goto LAB_004214a0;
          local_2c = (char *)(param_1[4] + 0xc + uVar10 * 2);
          local_34 = (char *)(param_1[4] + 0xe + (uVar10 + uVar7) * 2);
          local_38 = (char *)(uVar7 * 3 + param_1[4] + 0xe + uVar10 * 2);
          local_28 = local_2c + uVar7 + 2;
          goto LAB_00421402;
        }
        local_2c = (char *)(uVar10 + 1);
        uVar12 = local_c;
      }
      local_c = uVar12;
    } while (local_2c < local_c);
  }
  goto LAB_00421617;
  while( true ) {
    local_24 = (uint)CONCAT11(*local_28,local_34[1 - uVar7]);
    uVar12 = (int)(short)((short)*local_34 << 8) | (uint)(byte)local_38[1 - uVar7];
    uVar8 = (uint)CONCAT11(*local_38,(local_38 + (1 - uVar7))[uVar7]);
    if (uVar8 != 0xffff) {
      local_10 = local_8 - 1;
    }
    local_8 = local_8 - 1;
    local_2c = local_2c + -2;
    local_28 = local_28 + -2;
    local_34 = local_34 + -2;
    pcVar5 = local_38;
    local_38 = local_38 + -2;
    local_1c = uVar11;
    if (local_8 == 0) break;
LAB_00421402:
    uVar11 = (uint)CONCAT11(*local_2c,local_28[1 - (uVar7 + 2)]);
    if (uVar11 < local_18) break;
  }
LAB_004214a0:
  local_28 = pcVar5;
  if (local_10 == uVar10 + 1) {
    if (local_8 != uVar10) {
      puVar4 = (undefined1 *)(param_1[4] + 0xe + uVar10 * 2);
      local_1c = (uint)CONCAT11(*puVar4,puVar4[1]);
      puVar4 = puVar4 + uVar7 + 2;
      local_24 = (uint)CONCAT11(*puVar4,puVar4[1]);
      local_28 = puVar4 + uVar7;
      uVar12 = (int)(short)((short)*local_28 << 8) | (uint)(byte)local_28[1];
      local_28 = local_28 + uVar7;
      uVar8 = (uint)CONCAT11(*local_28,local_28[1]);
    }
    local_8 = uVar10 + 1;
    local_10 = uVar10;
    if (local_8 < uVar9) {
      iVar6 = param_1[4];
      local_38 = (char *)(iVar6 + 0xe + local_8 * 2);
      local_2c = (char *)(iVar6 + 0x10 + (local_8 + uVar7) * 2);
      local_34 = (char *)(uVar7 * 3 + iVar6 + 0x10 + local_8 * 2);
      pcVar5 = local_38 + uVar7 + 2;
      do {
        local_28 = pcVar5;
        uVar2 = *local_38;
        pcVar1 = local_28 + (1 - (uVar7 + 2));
        uVar11 = (uint)CONCAT11(*local_28,local_2c[1 - uVar7]);
        if (local_18 < uVar11) break;
        uVar12 = (int)(short)((short)*local_2c << 8) | (uint)(byte)local_34[1 - uVar7];
        uVar8 = (uint)CONCAT11(*local_34,(local_34 + (1 - uVar7))[uVar7]);
        if (uVar8 != 0xffff) {
          local_10 = local_8;
        }
        local_38 = local_38 + 2;
        pcVar5 = local_28 + 2;
        local_2c = local_2c + 2;
        local_8 = local_8 + 1;
        local_28 = local_34;
        local_34 = local_34 + 2;
        local_24 = uVar11;
        local_1c = (uint)CONCAT11(uVar2,*pcVar1);
      } while (local_8 < uVar9);
    }
    local_8 = local_8 - 1;
    if (local_10 == uVar10) {
LAB_00421614:
      uVar8 = 0;
      uVar10 = local_8;
      goto LAB_00421617;
    }
  }
  uVar10 = local_10;
  if (local_10 != local_8) {
    puVar4 = (undefined1 *)(param_1[4] + 0xe + local_10 * 2);
    local_1c = (uint)CONCAT11(*puVar4,puVar4[1]);
    puVar4 = puVar4 + uVar7 + 2;
    local_24 = (uint)CONCAT11(*puVar4,puVar4[1]);
    local_28 = puVar4 + uVar7;
    uVar12 = (int)(short)((short)*local_28 << 8) | (uint)(byte)local_28[1];
    local_28 = local_28 + uVar7;
    uVar8 = (uint)CONCAT11(*local_28,local_28[1]);
  }
LAB_004216ad:
  uVar7 = local_18;
  if (uVar8 != 0) {
    uVar7 = (uint)CONCAT11(local_28[uVar8 + (local_18 - local_24) * 2],
                           (local_28 + uVar8 + (local_18 - local_24) * 2)[1]);
    uVar8 = 0;
    if (uVar7 == 0) goto LAB_00421617;
  }
  uVar8 = uVar7 + uVar12 & 0xffff;
LAB_00421617:
  if (param_3 != '\0') {
    if ((local_1c < local_18) && (uVar10 + 1 == uVar9)) {
      uVar8 = 0;
    }
    else {
      iVar6 = FUN_00420bcd();
      if (iVar6 == 0) {
        param_1[6] = local_18;
        if (uVar8 == 0) {
          param_1[6] = local_18;
          FUN_00420d02();
          uVar8 = param_1[7];
        }
        else {
          param_1[7] = uVar8;
        }
        if (uVar8 != 0) {
          *param_2 = param_1[6];
        }
      }
      else if (uVar8 != 0) {
        *param_2 = local_18;
      }
    }
  }
  return uVar8;
}

