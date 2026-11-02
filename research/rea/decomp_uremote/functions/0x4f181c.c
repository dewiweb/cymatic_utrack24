// rea decompile_all
// name: FUN_004f181c
// address: 0x4f181c
// body: available
// range: 0x4f181c-0x4f1898 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004f181c(uint param_1,uint param_2,char param_3)

{
  POINT Point;
  int *piVar1;
  uint uVar2;
  HWND hWnd;
  BOOL BVar3;
  int in_ECX;
  undefined1 local_24 [16];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar1 = (int *)FUN_004f0b41(local_24,*(undefined4 *)(in_ECX + 0x38));
  local_14 = *piVar1;
  local_10 = piVar1[1];
  local_c = piVar1[2];
  local_8 = piVar1[3];
  uVar2 = local_c - local_14;
  if ((param_1 < uVar2) && (uVar2 = local_8 - local_10, param_2 < uVar2)) {
    Point.y = *(int *)(in_ECX + 0x60) + param_2 + local_10;
    Point.x = *(int *)(in_ECX + 100) + param_1 + local_14;
    hWnd = WindowFromPoint(Point);
    if ((hWnd == *(HWND *)(in_ECX + 0x38)) ||
       ((param_3 != '\0' && (BVar3 = IsChild(*(HWND *)(in_ECX + 0x38),hWnd), BVar3 != 0)))) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

