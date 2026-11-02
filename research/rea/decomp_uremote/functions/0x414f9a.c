// rea decompile_all
// name: FUN_00414f9a
// address: 0x414f9a
// body: available
// range: 0x414f9a-0x415101 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00414f9a(int param_1)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_1c = *(undefined4 *)(param_1 + 100);
  iVar2 = FUN_00414ae9(*(undefined4 *)(param_1 + 0xbc),8,&local_14,&local_20);
  if (iVar2 != 0) {
    return iVar2;
  }
  local_8 = FUN_004111b5();
  if (local_8 != 0) {
    return local_8;
  }
  local_14 = FUN_004112fb();
  local_18 = local_14 >> 2 & 1;
  if (local_18 == 0) {
    local_c = FUN_004112fb();
  }
  else {
    local_c = FUN_004112c7();
  }
  FUN_00411249();
  if ((((local_14 & 0xffffff00) != 0) || ((int)*(uint *)(param_1 + 0x120) < 0)) ||
     (local_c != *(uint *)(param_1 + 0x120))) {
    return 3;
  }
  uVar4 = 0;
  local_10 = FUN_00411976(4,0,&local_8);
  if (local_8 != 0) {
    return local_8;
  }
  if (local_c != 0) {
    do {
      if (local_18 == 1) {
        uVar3 = FUN_0041148f();
      }
      else {
        uVar3 = FUN_004114f7();
      }
      *(undefined4 *)(local_10 + uVar4 * 4) = uVar3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_c);
    if (local_8 != 0) goto LAB_004150e9;
  }
  uVar4 = 0;
  do {
    if (local_18 == 1) {
      FUN_0041148f();
    }
    else {
      FUN_004114f7();
    }
    if (local_8 != 0) goto LAB_004150e9;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  uVar4 = 0;
  if (local_c != 0) {
    iVar2 = 0;
    do {
      uVar1 = *(uint *)(local_10 + uVar4 * 4);
      if ((-1 < (int)uVar1) && (uVar1 <= local_20)) {
        *(uint *)(*(int *)(param_1 + 0x124) + 0xc + iVar2) = *(int *)(in_EAX + 8) + uVar1;
      }
      uVar4 = uVar4 + 1;
      iVar2 = iVar2 + 0x10;
    } while (uVar4 < local_c);
  }
  *(uint *)(param_1 + 0x134) = local_14;
LAB_004150e9:
  FUN_00411a5c(local_10);
  return local_8;
}

