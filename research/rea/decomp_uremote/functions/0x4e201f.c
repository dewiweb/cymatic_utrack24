// rea decompile_all
// name: FUN_004e201f
// address: 0x4e201f
// body: available
// range: 0x4e201f-0x4e2099 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004e201f(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int unaff_EBX;
  undefined4 uVar5;
  
  iVar1 = *(int *)(unaff_EBX + 0x14);
  uVar4 = FUN_004e1a96();
  if (((char)uVar4 == '\0') || (uVar4 = param_2, *(uint *)(iVar1 + 0x18) <= param_2)) {
LAB_004e208c:
    uVar4 = uVar4 & 0xffffff00;
    *(undefined8 *)(unaff_EBX + 0x28) = 0x3ff0000000000000;
  }
  else {
    uVar2 = *(uint *)(iVar1 + 0x1c);
    if (uVar2 <= param_3) {
      uVar4 = FUN_004c4916();
      if ((char)uVar4 == '\0') goto LAB_004e208c;
    }
    cVar3 = FUN_004e1a96();
    if (((cVar3 == '\0') || (*(int *)(iVar1 + 0xcc) < 1)) || (0x17 < (int)param_3)) {
      uVar4 = FUN_004e1aaf();
      if (((char)uVar4 == '\0') || ((int)param_3 <= (int)(uVar2 - 0x18))) goto LAB_004e208c;
      uVar5 = 1;
    }
    else {
      uVar5 = 0xffffffff;
    }
    uVar4 = FUN_004e209a(param_1,uVar5);
  }
  return uVar4;
}

