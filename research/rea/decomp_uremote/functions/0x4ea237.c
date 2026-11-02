// rea decompile_all
// name: FUN_004ea237
// address: 0x4ea237
// body: available
// range: 0x4ea237-0x4ea394 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ea237(undefined4 param_1,char param_2)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined8 uVar5;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_2 == '\0') {
    *(undefined4 *)(in_EAX + 0x130) = 0;
    FUN_004e9d4f(*(undefined4 *)(in_EAX + 0xdc),*(undefined4 *)(in_EAX + 0xe0));
    FUN_004e9e7c(param_1);
    uVar4 = FUN_004ee9f3();
    uVar3 = FUN_00439b5a(uVar4);
    *(undefined4 *)(in_EAX + 0xdc) = uVar4;
    *(undefined4 *)(in_EAX + 0xe0) = uVar3;
  }
  else {
    FUN_004e9e7c(param_1);
    iVar2 = *(int *)(in_EAX + 0xdc);
    if (*(int *)(in_EAX + 0x130) == 0) {
      iVar1 = FUN_004ee9f3();
      local_18 = FUN_005af9e1(iVar1 - extraout_ECX);
      iVar1 = FUN_004ee9f3();
      iVar2 = FUN_005af9e1(iVar1 - iVar2);
      *(uint *)(in_EAX + 0x130) = (local_18 <= iVar2) + 1;
    }
    if (*(int *)(in_EAX + 0x130) == 1) {
      uVar5 = FUN_004ee9f3();
      if ((int)((ulonglong)uVar5 >> 0x20) <= (int)uVar5) {
        *(undefined4 *)(in_EAX + 0x130) = 2;
      }
    }
    else {
      uVar5 = FUN_004ee9f3();
      if ((int)uVar5 < (int)((ulonglong)uVar5 >> 0x20)) {
        *(undefined4 *)(in_EAX + 0x130) = extraout_ECX_00;
      }
    }
    FUN_004ee9f3();
    FUN_004f5e6e();
    *(int *)(in_EAX + 0xdc) = local_18;
    *(undefined4 *)(in_EAX + 0xe0) = local_14;
    FUN_00439b5a(local_14,extraout_ECX_01,extraout_ECX_01);
    uVar4 = *(undefined4 *)(in_EAX + 0xdc);
    uVar3 = FUN_00440367(uVar4);
    uVar4 = FUN_00439b5a(uVar3,uVar4,local_14,uVar3);
    FUN_004e9d4f(uVar3,uVar4);
  }
  return;
}

