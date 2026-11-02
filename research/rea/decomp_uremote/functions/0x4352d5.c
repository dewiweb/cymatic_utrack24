// rea decompile_all
// name: FUN_004352d5
// address: 0x4352d5
// body: available
// range: 0x4352d5-0x4358fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004352d5(uint param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint *in_ECX;
  undefined1 auStack_bc [4];
  uint local_b8;
  uint local_b4;
  uint local_b0;
  int local_ac;
  short local_a8 [2];
  uint local_a4;
  short local_a0 [4];
  int local_98;
  uint local_94;
  uint local_90;
  undefined1 local_8c [4];
  uint local_88;
  int local_84;
  int local_80;
  int local_7c;
  short local_78;
  ushort local_76;
  short local_74;
  short local_72;
  int local_70;
  undefined1 local_68 [12];
  ushort local_5c;
  ushort local_5a;
  undefined1 local_58 [12];
  ushort local_4c;
  ushort local_4a;
  undefined1 local_48 [12];
  ushort local_3c;
  ushort local_3a;
  undefined1 local_38 [8];
  int local_30;
  undefined4 local_2c;
  undefined1 local_20 [8];
  int local_18;
  uint local_10;
  uint local_c;
  
  local_c = DAT_00955fd4 ^ (uint)auStack_bc;
  local_90 = in_ECX[0x19];
  in_ECX[0x21] = 0;
  uVar1 = in_ECX[0x1a];
  iVar3 = FUN_0041106d();
  if ((iVar3 != 0) || (iVar3 = FUN_00411560(uVar1,local_a8), iVar3 != 0)) goto LAB_004358e8;
  if (local_a8[0] == 0x5a4d) {
    iVar3 = FUN_0041106d();
    if ((iVar3 != 0) || (iVar3 = FUN_00411560(uVar1,local_a0), iVar3 != 0)) goto LAB_004358e8;
    iVar3 = 2;
    if (local_a0[0] == 0x454e) {
      local_b8 = 0;
      local_b4 = 0;
      iVar3 = FUN_0041106d();
      if ((iVar3 != 0) || (local_ac = FUN_004111b5(), local_ac != 0)) goto LAB_004358e8;
      local_a4 = FUN_0041129f();
      local_a4 = local_a4 & 0xffff;
      while( true ) {
        uVar2 = FUN_0041129f();
        local_b0 = (uint)uVar2;
        if (uVar2 == 0) break;
        uVar4 = FUN_0041129f();
        if ((short)local_b0 == -0x7ff8) {
          local_b8 = uVar4 & 0xffff;
          iVar3 = FUN_004d021d();
          local_b4 = iVar3 + 4 + (*(int *)(uVar1 + 0x20) - *(int *)(uVar1 + 0x24));
          break;
        }
        *(int *)(uVar1 + 0x20) = *(int *)(uVar1 + 0x20) + (uVar4 & 0xffff) * 0xc + 4;
      }
      FUN_00411249();
      if (((((ushort)local_b8 == 0) || (local_b4 == 0)) ||
          (uVar4 = local_b8 & 0xffff,
          *(uint *)(uVar1 + 4) <= uVar4 * 0x76 && uVar4 * 0x76 - *(uint *)(uVar1 + 4) != 0)) ||
         ((*in_ECX = uVar4, (int)uVar4 <= (int)param_1 || ((int)param_1 < 0)))) goto LAB_004358e8;
      uVar4 = FUN_00411912(0xac,&local_ac);
      in_ECX[0x21] = uVar4;
      if (local_ac != 0) goto LAB_004358e8;
      iVar3 = FUN_0041106d();
      if ((iVar3 != 0) || (iVar3 = FUN_004111b5(), uVar4 = local_a4, iVar3 != 0)) goto LAB_004358e3;
      uVar5 = FUN_0041129f();
      *(uint *)in_ECX[0x21] = (uVar5 & 0xffff) << ((byte)uVar4 & 0x1f);
      uVar5 = FUN_0041129f();
      *(uint *)(in_ECX[0x21] + 0xa4) = (uVar5 & 0xffff) << ((byte)uVar4 & 0x1f);
      *(int *)(uVar1 + 0x20) = *(int *)(uVar1 + 0x20) + 8;
      FUN_00411249();
      iVar3 = FUN_00435218(in_ECX[0x21]);
    }
    else if (local_a0[0] == 0x4550) {
      iVar3 = FUN_0041106d();
      if ((((iVar3 == 0) && (iVar3 = FUN_00411560(uVar1,&local_7c), iVar3 == 0)) &&
          (local_7c == 0x4550)) &&
         (((local_78 == 0x14c && (local_74 == 0xe0)) && (local_72 == 0x10b)))) {
        *in_ECX = 0;
        local_b8 = 0;
        local_b8._0_2_ = 0;
        while( true ) {
          if ((local_76 <= (ushort)local_b8) || (iVar3 = FUN_00411560(uVar1,local_20), iVar3 != 0))
          goto LAB_004358e8;
          if (local_70 == local_18) break;
          local_b8 = local_b8 + 1;
        }
        iVar3 = FUN_0041106d();
        if ((iVar3 == 0) && (iVar3 = FUN_00411560(uVar1,local_48), iVar3 == 0)) {
          local_b8 = 0;
          local_a4 = local_10;
          iVar3 = 0;
          if ((uint)local_3a + (uint)local_3c != 0) goto LAB_00435632;
          goto LAB_004358cc;
        }
      }
      goto LAB_004358e8;
    }
    goto LAB_004358cc;
  }
  goto LAB_004358e3;
  while( true ) {
    local_94 = local_94 & 0x7fffffff;
    local_84 = local_94 + local_10;
    iVar3 = FUN_0041106d();
    if ((iVar3 != 0) || (iVar3 = FUN_00411560(uVar1,local_68), iVar3 != 0)) goto LAB_004358e8;
    local_b0 = 0;
    if ((uint)local_5a + (uint)local_5c != 0) {
      do {
        iVar3 = FUN_0041106d();
        if (((iVar3 != 0) || (iVar3 = FUN_00411560(uVar1,local_8c), iVar3 != 0)) ||
           ((local_88 & 0x80000000) == 0)) goto LAB_004358e8;
        local_88 = local_88 & 0x7fffffff;
        local_80 = local_88 + local_10;
        iVar3 = FUN_0041106d();
        if ((iVar3 != 0) || (iVar3 = FUN_00411560(uVar1,local_58), iVar3 != 0)) goto LAB_004358e8;
        local_b4 = 0;
        if ((uint)local_4a + (uint)local_4c != 0) {
          do {
            iVar3 = FUN_0041106d();
            if (((iVar3 != 0) || (iVar3 = FUN_00411560(uVar1,local_38), iVar3 != 0)) ||
               ((local_88 & 0x80000000) != 0)) goto LAB_004358e8;
            if (local_98 == 8) {
              iVar3 = FUN_0041106d();
              if ((iVar3 != 0) || (local_ac = FUN_00411560(uVar1,&local_30), local_ac != 0))
              goto LAB_004358e8;
              if (param_1 == *in_ECX) {
                piVar6 = (int *)FUN_00411912(0xac,&local_ac);
                in_ECX[0x21] = (uint)piVar6;
                if (local_ac != 0) goto LAB_004358e8;
                *piVar6 = (local_30 - local_18) + local_10;
                *(undefined4 *)(in_ECX[0x21] + 0xa4) = local_2c;
                iVar3 = FUN_00435218(in_ECX[0x21]);
                if (iVar3 != 0) goto LAB_004358e3;
              }
              *in_ECX = *in_ECX + 1;
            }
            local_b4 = local_b4 + 1;
          } while ((local_b4 & 0xffff) < (uint)local_4a + (uint)local_4c);
        }
        local_b0 = local_b0 + 1;
      } while ((local_b0 & 0xffff) < (uint)local_5a + (uint)local_5c);
    }
    iVar3 = 0;
    local_b8 = local_b8 + 1;
    if ((uint)local_3a + (uint)local_3c <= (local_b8 & 0xffff)) break;
LAB_00435632:
    iVar3 = FUN_0041106d();
    if (((iVar3 != 0) || (iVar3 = FUN_00411560(uVar1,&local_98), iVar3 != 0)) ||
       ((local_94 & 0x80000000) == 0)) goto LAB_004358e8;
  }
LAB_004358cc:
  if (((*in_ECX == 0) || ((int)*in_ECX <= (int)param_1)) || (iVar3 == 0)) goto LAB_004358e8;
LAB_004358e3:
  FUN_004351c6();
LAB_004358e8:
  __security_check_cookie(local_c ^ (uint)auStack_bc);
  return;
}

