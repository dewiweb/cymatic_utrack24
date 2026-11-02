// rea decompile_all
// name: FUN_0045c2b8
// address: 0x45c2b8
// body: available
// range: 0x45c2b8-0x45c47b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045c2b8(undefined4 param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  uint uVar7;
  undefined1 local_10 [12];
  
  if (*(int **)(in_ECX + 0x11c) == (int *)0x0) {
    return;
  }
  (**(code **)(**(int **)(in_ECX + 0x11c) + 8))(local_10);
  cVar2 = FUN_00503830();
  if (cVar2 == '\0') {
    return;
  }
  uVar1 = *(ushort *)(param_3 + 4);
  uVar7 = (uint)uVar1;
  if (uVar7 == 0xb201) {
    FUN_00504120();
    uVar6 = FUN_005b3fb0();
    *(undefined4 *)(in_ECX + 0x2c0) = uVar6;
    FUN_00466c04();
    FUN_00465317();
  }
  else {
    if (uVar7 != 0xb202) {
      if ((ushort)(uVar1 + 0x2000) < 0x1a) {
        uVar4 = FUN_00504120();
        if ((uVar4 & 0xffff) != 0) {
          FUN_005aff70((double)((uVar4 & 0xffff) << 0xf) / 2147483647.0);
        }
        iVar5 = FUN_005b3fb0();
        if (iVar5 < -0x40) {
          iVar5 = -0x40;
        }
        FUN_0045f955(uVar7 - 0xe000,iVar5);
        return;
      }
      if ((ushort)(uVar1 + 0x2fb0) < 0x18) {
        uVar3 = FUN_00504120();
        *(undefined2 *)(in_ECX + -0x19d68 + uVar7 * 2) = uVar3;
        *(undefined1 *)((uVar7 - 0xcfb5) + in_ECX) = 1;
      }
      else {
        if (0x17 < (ushort)(uVar1 + 0x2f90)) {
          return;
        }
        uVar3 = FUN_00504120();
        *(undefined2 *)(in_ECX + -0x19d78 + uVar7 * 2) = uVar3;
        *(undefined1 *)((uVar7 - 0xcfbd) + in_ECX) = 1;
      }
      goto LAB_0045c46e;
    }
    FUN_00504120();
    uVar6 = FUN_005b3fb0();
    *(undefined4 *)(in_ECX + 0x2c8) = uVar6;
    FUN_00466c04();
    FUN_00465317();
  }
  FUN_004652d6();
  *(undefined1 *)(in_ECX + 0xfb) = 1;
LAB_0045c46e:
  FUN_0047433f();
  return;
}

