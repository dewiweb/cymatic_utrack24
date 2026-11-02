// rea decompile_all
// name: FUN_0040e6f3
// address: 0x40e6f3
// body: available
// range: 0x40e6f3-0x40e93f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040e6f3(void)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_00000018;
  int local_24;
  int local_20;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 1;
  if (in_stack_00000014 == -1) {
    in_stack_00000014 = 0;
  }
  iVar7 = 0;
  iVar1 = 1;
  if (in_stack_00000014 == 0) {
    in_stack_00000014 = 0;
    if (0 < in_stack_00000010) {
      do {
        local_8 = FUN_0041106d();
        if (local_8 != 0) {
          return local_8;
        }
        iVar1 = FUN_0041148f();
        if (local_8 != 0) {
          return local_8;
        }
        iVar7 = iVar7 + 1;
        in_stack_00000014 = in_stack_00000014 + 6 + iVar1;
      } while (iVar7 < in_stack_00000010);
    }
    iVar7 = in_stack_00000014 + 2;
    puVar2 = (undefined1 *)FUN_00411912(iVar7,&local_8);
    iVar1 = local_8;
    if (local_8 == 0) {
      *puVar2 = 0x80;
      puVar2[1] = 1;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      local_14 = 6;
      local_20 = 2;
      local_c = 0;
      local_24 = 1;
      local_10 = 0;
      iVar1 = 2;
      iVar6 = 0;
      iVar9 = 6;
      if (0 < in_stack_00000010) {
        do {
          local_8 = FUN_0041106d();
          if (local_8 != 0) goto LAB_0040e8fb;
          iVar3 = FUN_0041148f();
          if (local_8 != 0) {
            return local_8;
          }
          uVar4 = FUN_00411377();
          if (local_8 != 0) {
            return local_8;
          }
          iVar8 = (int)(uVar4 & 0xffff) >> 8;
          if (iVar8 != 0) {
            if (iVar3 < 3) {
              iVar3 = 0;
            }
            else {
              iVar3 = iVar3 + -2;
            }
            if (iVar8 == local_24) {
              local_c = local_c + iVar3;
            }
            else {
              if (iVar7 < local_20 + 3) goto LAB_0040e8fb;
              puVar2[local_20 + 1] = (char)((uint)local_c >> 8);
              puVar2[local_20] = (char)local_c;
              puVar2[local_20 + 2] = (char)((uint)local_c >> 0x10);
              puVar2[local_20 + 3] = (char)((uint)local_c >> 0x18);
              iVar1 = local_20;
              iVar6 = local_c;
              iVar9 = local_14;
              if (iVar8 == 5) break;
              if (iVar7 < local_14 + 6) goto LAB_0040e8fb;
              puVar2[local_14] = 0x80;
              puVar2[local_14 + 1] = (char)((uVar4 & 0xffff) >> 8);
              local_20 = local_14 + 2;
              puVar2[local_20] = 0;
              puVar2[local_14 + 3] = 0;
              puVar2[local_14 + 4] = 0;
              puVar2[local_14 + 5] = 0;
              local_14 = local_14 + 6;
              local_24 = iVar8;
              local_c = iVar3;
            }
            local_8 = 1;
            if (((in_stack_00000014 < local_14) || (in_stack_00000014 < iVar3 + local_14)) ||
               (local_8 = FUN_004110b4(puVar2 + local_14,iVar3), local_14 = iVar3 + local_14,
               local_8 != 0)) goto LAB_0040e8fb;
          }
          local_10 = local_10 + 1;
          iVar1 = local_20;
          iVar6 = local_c;
          iVar9 = local_14;
        } while (local_10 < in_stack_00000010);
      }
      if (iVar9 + 2 <= iVar7) {
        puVar2[iVar9] = 0x80;
        puVar2[iVar9 + 1] = 3;
        if (iVar1 + 3 <= iVar7) {
          puVar5 = puVar2 + iVar1;
          puVar5[1] = (char)((uint)iVar6 >> 8);
          *puVar5 = (char)iVar6;
          puVar5[2] = (char)((uint)iVar6 >> 0x10);
          puVar5[3] = (char)((uint)iVar6 >> 0x18);
          iVar1 = FUN_0040e468(puVar2,iVar9 + 2,0,"type1",in_stack_00000018);
          return iVar1;
        }
      }
LAB_0040e8fb:
      FUN_00411a5c(puVar2);
      iVar1 = local_8;
    }
  }
  return iVar1;
}

