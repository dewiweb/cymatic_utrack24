// rea decompile_all
// name: FUN_00425a85
// address: 0x425a85
// body: available
// range: 0x425a85-0x425cc8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00425a85(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  uint local_18;
  undefined4 *local_14;
  int local_8;
  
  local_14 = (undefined4 *)0x0;
  uVar2 = FUN_00411377();
  uVar9 = (uint)uVar2;
  if (local_8 != 0) {
    return local_8;
  }
  if (*(ushort *)(param_1 + 0x108) < uVar9) {
    return 3;
  }
  iVar4 = FUN_00411976(2,0,&local_8);
  if ((local_8 == 0) && (local_8 = FUN_004111b5(), local_8 == 0)) {
    iVar10 = 0;
    if (uVar9 != 0) {
      do {
        uVar3 = FUN_00411277();
        *(undefined2 *)(iVar4 + iVar10 * 2) = uVar3;
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar9);
    }
    FUN_00411249();
    iVar10 = 0;
    local_18 = 0;
    if (uVar9 != 0) {
      do {
        uVar5 = (uint)*(ushort *)(iVar4 + iVar10 * 2);
        if ((0x101 < uVar5) && (uVar5 = uVar5 - 0x101, (int)local_18 < (int)uVar5)) {
          local_18 = uVar5 & 0xffff;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar9);
    }
    uVar8 = (ushort)local_18;
    local_14 = (undefined4 *)FUN_00411976(4,0,&local_8);
    if (local_8 == 0) {
      uVar1 = 0;
      if (uVar8 == 0) {
LAB_00425c6c:
        *(ushort *)(param_1 + 0x278) = uVar2;
        *(int *)(param_1 + 0x27c) = iVar4;
        *(ushort *)(param_1 + 0x27a) = uVar8;
        *(undefined4 **)(param_1 + 0x280) = local_14;
        return 0;
      }
      do {
        iVar10 = FUN_004d021d();
        puVar7 = local_14;
        if (param_2 <= iVar10) break;
        uVar9 = FUN_00411330();
        uVar9 = uVar9 & 0xff;
        if (local_8 != 0) goto LAB_00425c95;
        if ((param_2 < (int)uVar9) || (iVar10 = FUN_004d021d(), (int)(param_2 - uVar9) < iVar10)) {
          iVar10 = FUN_004d021d();
          if (param_2 - iVar10 < 0) {
            uVar9 = 0;
          }
          else {
            iVar10 = FUN_004d021d();
            uVar9 = param_2 - iVar10;
          }
        }
        iVar10 = FUN_00411976(1,0,&local_8);
        uVar5 = (uint)uVar1;
        local_14[uVar5] = iVar10;
        if ((local_8 != 0) || (local_8 = FUN_004110b4(iVar10,uVar9), local_8 != 0))
        goto LAB_00425c95;
        uVar1 = uVar1 + 1;
        *(undefined1 *)(uVar9 + local_14[uVar5]) = 0;
      } while (uVar1 < uVar8);
      do {
        if (uVar8 <= uVar1) goto LAB_00425c6c;
        puVar6 = (undefined1 *)FUN_00411976(1,0,&local_8);
        local_14[uVar1] = puVar6;
        if (local_8 != 0) goto LAB_00425c95;
        uVar1 = uVar1 + 1;
        *puVar6 = 0;
      } while( true );
    }
  }
LAB_00425ca9:
  FUN_00411a5c(local_14);
  FUN_00411a5c(iVar4);
  return local_8;
LAB_00425c95:
  do {
    FUN_00411a5c(*puVar7);
    *puVar7 = 0;
    local_18 = local_18 - 1;
    puVar7 = puVar7 + 1;
  } while (local_18 != 0);
  goto LAB_00425ca9;
}

