// rea decompile_all
// name: FUN_00438319
// address: 0x438319
// body: available
// range: 0x438319-0x4385a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00438319(undefined1 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int *unaff_EBX;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  byte local_5;
  
  local_14 = unaff_EBX[0x11];
  local_10 = unaff_EBX[0x10];
  local_18 = unaff_EBX[0x12];
  local_1c = 0;
  if (param_2 != 0) {
    iVar1 = *unaff_EBX;
    if (iVar1 == 0) {
      iVar1 = FUN_0041106d();
      if ((iVar1 == 0) && (iVar1 = FUN_0041112f(&local_5,1), iVar1 == 1)) {
        uVar2 = local_5 & 0x1f;
        iVar1 = 1 << (sbyte)uVar2;
        unaff_EBX[10] = uVar2;
        unaff_EBX[0xb] = local_5 & 0x80;
        unaff_EBX[0xc] = iVar1 + -0x100;
        if (uVar2 < 0x11) {
          local_18 = 0;
          unaff_EBX[0xd] = 9;
          unaff_EBX[0xe] = (uint)((local_5 & 0x80) != 0);
          if (uVar2 < 10) {
            iVar1 = iVar1 + -0xff;
          }
          else {
            iVar1 = 0x100;
          }
          unaff_EBX[0xf] = iVar1;
          uVar2 = FUN_004380f9();
          if (uVar2 < 0x100) {
            if (param_1 != (undefined1 *)0x0) {
              *param_1 = (char)uVar2;
            }
            local_1c = 1;
            local_14 = uVar2;
            local_10 = uVar2;
            if (1 < param_2) goto LAB_004383cd;
            goto LAB_00438593;
          }
        }
      }
LAB_0043858b:
      *unaff_EBX = 3;
    }
    else {
      if (iVar1 == 1) goto LAB_0043848d;
      if (iVar1 == 2) {
        do {
          iVar1 = unaff_EBX[0x17];
          while (iVar1 != 0) {
            unaff_EBX[0x17] = unaff_EBX[0x17] + -1;
            if (param_1 != (undefined1 *)0x0) {
              param_1[local_1c] = *(undefined1 *)(unaff_EBX[0x17] + unaff_EBX[0x16]);
            }
            local_1c = local_1c + 1;
            if (local_1c == param_2) goto LAB_00438593;
            iVar1 = unaff_EBX[0x17];
          }
          if ((uint)unaff_EBX[0xe] < (uint)unaff_EBX[0xc]) {
            if (((uint)unaff_EBX[0x15] <= (uint)unaff_EBX[0xe]) &&
               (iVar1 = FUN_00438214(), iVar1 < 0)) goto LAB_0043858b;
            *(undefined2 *)(unaff_EBX[0x13] + unaff_EBX[0xe] * 2) = (undefined2)local_10;
            *(undefined1 *)(unaff_EBX[0x14] + unaff_EBX[0xe]) = (undefined1)local_14;
            unaff_EBX[0xe] = unaff_EBX[0xe] + 1;
          }
          local_10 = local_18;
LAB_004383cd:
          *unaff_EBX = 1;
LAB_0043848d:
          while( true ) {
            local_c = FUN_004380f9();
            if ((int)local_c < 0) goto LAB_0043858b;
            if ((local_c != 0x100) || (unaff_EBX[0xb] == 0)) break;
            unaff_EBX[0xe] = 0;
            *(undefined1 *)(unaff_EBX + 8) = 1;
            local_10 = 0;
            local_14 = 0;
          }
          local_18 = local_c;
          if (0xff < local_c) {
            if ((uint)unaff_EBX[0xe] <= local_c - 0x100) {
              if (((uint)unaff_EBX[0xe] < local_c - 0x100) ||
                 (((uint)unaff_EBX[0x18] <= (uint)unaff_EBX[0x17] &&
                  (iVar1 = FUN_004381b2(), iVar1 < 0)))) goto LAB_0043858b;
              *(undefined1 *)(unaff_EBX[0x16] + unaff_EBX[0x17]) = (undefined1)local_14;
              unaff_EBX[0x17] = unaff_EBX[0x17] + 1;
              local_c = local_10;
            }
            for (; 0xff < local_c;
                local_c = (uint)*(ushort *)(unaff_EBX[0x13] + -0x200 + local_c * 2)) {
              if ((unaff_EBX[0x13] == 0) ||
                 (((uint)unaff_EBX[0x18] <= (uint)unaff_EBX[0x17] &&
                  (iVar1 = FUN_004381b2(), iVar1 < 0)))) goto LAB_0043858b;
              *(undefined1 *)(unaff_EBX[0x16] + unaff_EBX[0x17]) =
                   *(undefined1 *)(unaff_EBX[0x14] + -0x100 + local_c);
              unaff_EBX[0x17] = unaff_EBX[0x17] + 1;
            }
          }
          local_14 = local_c;
          if (((uint)unaff_EBX[0x18] <= (uint)unaff_EBX[0x17]) &&
             (iVar1 = FUN_004381b2(), iVar1 < 0)) goto LAB_0043858b;
          *(undefined1 *)(unaff_EBX[0x16] + unaff_EBX[0x17]) = (undefined1)local_c;
          unaff_EBX[0x17] = unaff_EBX[0x17] + 1;
          *unaff_EBX = 2;
        } while( true );
      }
    }
  }
LAB_00438593:
  unaff_EBX[0x10] = local_10;
  unaff_EBX[0x11] = local_14;
  unaff_EBX[0x12] = local_18;
  return local_1c;
}

