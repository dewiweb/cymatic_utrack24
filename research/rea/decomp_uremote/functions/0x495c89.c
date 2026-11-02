// rea decompile_all
// name: FUN_00495c89
// address: 0x495c89
// body: available
// range: 0x495c89-0x495d74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00495c89(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int unaff_ESI;
  uint uVar4;
  int iVar5;
  undefined1 local_408 [1024];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  if (*(int *)(unaff_ESI + 0x34) == param_1) {
    *(undefined4 *)(unaff_ESI + 0x3c) = 0;
    *(undefined4 *)(unaff_ESI + 0x48) = 0;
    iVar3 = *param_3;
    *(undefined4 *)(unaff_ESI + 0x38) = param_2;
    iVar5 = *in_ECX;
    if (param_4 != 0) {
      *(int *)(unaff_ESI + 0x44) = param_4;
    }
    do {
      iVar3 = iVar3 + *(int *)(unaff_ESI + 0x3c);
      iVar2 = -1;
      if (iVar3 != -1) {
        iVar2 = iVar3;
      }
      uVar4 = iVar5 + *(int *)(unaff_ESI + 0x48);
      iVar3 = iVar3 - iVar2;
      *(int *)(unaff_ESI + 0x3c) = iVar2;
      uVar1 = 0xffffffff;
      if (param_4 == 0) {
        *(undefined1 **)(unaff_ESI + 0x44) = local_408;
        uVar1 = 0x400;
      }
      if (uVar4 < uVar1) {
        uVar1 = uVar4;
      }
      iVar5 = uVar4 - uVar1;
      *(uint *)(unaff_ESI + 0x48) = uVar1;
      iVar2 = FUN_0046a107(unaff_ESI + 0x38,(-(uint)(iVar5 != 0) & 0xfffffffc) + 4);
    } while (iVar2 == 0);
    if (param_4 == 0) {
      *(undefined4 *)(unaff_ESI + 0x44) = 0;
    }
    iVar3 = iVar3 + *(int *)(unaff_ESI + 0x3c);
    iVar5 = iVar5 + *(int *)(unaff_ESI + 0x48);
    if (iVar5 != 0) {
      *in_ECX = *in_ECX - iVar5;
    }
    if (iVar3 != 0) {
      *param_3 = *param_3 - iVar3;
    }
    FUN_0048f554();
  }
  else {
    *(char **)(unaff_ESI + 0x50) = "zstream unclaimed";
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

