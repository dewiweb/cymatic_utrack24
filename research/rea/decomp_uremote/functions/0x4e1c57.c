// rea decompile_all
// name: FUN_004e1c57
// address: 0x4e1c57
// body: available
// range: 0x4e1c57-0x4e1d87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e1c57(uint param_1,char param_2,char param_3,char param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int in_EAX;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  undefined1 local_10 [11];
  char local_5;
  
  if ((*(char *)(*(int *)(in_EAX + 0x14) + 0xbc) == '\0') ||
     ((pbVar4 = (byte *)FUN_004c751d(), (*pbVar4 & 0x70) == 0 &&
      (pbVar4 = (byte *)FUN_004f4b66(local_10), (*pbVar4 & 0x70) == 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  iVar1 = *(int *)(in_EAX + 0x14);
  *(undefined1 *)(in_EAX + 0x38) = uVar2;
  local_5 = FUN_004f4ce1();
  if (local_5 != '\0') {
    iVar5 = FUN_004c3124();
    if (iVar5 == 0) {
      local_5 = *(char *)(iVar1 + 0xc1) == '\0';
      iVar5 = FUN_004ed4d9();
      do {
        iVar5 = iVar5 + -1;
        if (iVar5 < 0) goto LAB_004e1cdf;
        piVar6 = (int *)FUN_004ed4e7();
        cVar3 = (**(code **)(*piVar6 + 0x60))();
      } while (cVar3 == '\0');
      local_5 = '\x01';
      *(undefined1 *)(iVar1 + 0xc1) = 1;
    }
LAB_004e1cdf:
    if (local_5 != '\0') {
      if ((((param_2 == '\0') || (param_1 <= *(int *)(*(int *)(in_EAX + 0x14) + 0xe4) + 0xfaU)) ||
          (*(char *)(in_EAX + 0x38) != '\0')) || (param_3 != '\0')) {
        *(uint *)(*(int *)(in_EAX + 0x14) + 0xe8) = param_1;
        return;
      }
      cVar3 = FUN_004c0ee2(1,param_5,param_6);
      if (cVar3 != '\0') {
        FUN_004e195c();
        return;
      }
      if ((*(char *)(*(int *)(in_EAX + 0x14) + 0xbc) == '\0') &&
         (*(char *)(*(int *)(in_EAX + 0x14) + 0xbe) != '\0')) {
        return;
      }
      if (param_4 != '\0') {
        return;
      }
      goto LAB_004e1d6c;
    }
  }
  if (param_1 <= *(int *)(*(int *)(in_EAX + 0x14) + 0xe8) + 10U) {
    return;
  }
  DAT_0095d655 = 1;
LAB_004e1d6c:
  FUN_004e0a5f(0);
  return;
}

