// rea decompile_all
// name: FUN_004f8542
// address: 0x4f8542
// body: available
// range: 0x4f8542-0x4f8604 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f8542(int param_1,int param_2)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  int *unaff_EBX;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  cVar1 = FUN_004c044d();
  if (cVar1 == '\0') {
    param_1 = param_1 + *(int *)(in_EAX + 0x10);
    param_2 = param_2 + *(int *)(in_EAX + 0x14);
  }
  else {
    iVar2 = FUN_004c0453();
    if (iVar2 != 0) {
      uVar4 = extraout_ECX;
      uVar5 = extraout_ECX;
      FUN_004f9529(param_1,param_2,extraout_ECX,extraout_ECX);
      FUN_004edcf8(uVar4,uVar5);
      iVar2 = FUN_004c4e62(local_14,local_10);
      param_2 = *(int *)(iVar2 + 0x8c);
      FUN_004f992d(param_2);
      param_1 = local_c;
    }
  }
  if (*(int *)(in_EAX + 0x24) != 0) {
    piVar3 = (int *)FUN_004f8fe4();
    param_1 = *piVar3;
    param_2 = piVar3[1];
  }
  unaff_EBX[1] = param_2;
  *unaff_EBX = param_1;
  return;
}

