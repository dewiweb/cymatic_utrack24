// rea decompile_all
// name: FUN_004eaf22
// address: 0x4eaf22
// body: available
// range: 0x4eaf22-0x4eb04d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eaf22(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_20 [4];
  int local_1c;
  int local_18;
  uint local_10;
  int local_c;
  
  local_1c = FUN_004ea395(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  iVar6 = 0;
  if (*(byte *)(param_1 + 0x3c) < 4) {
    FUN_004ebf83(local_20);
    local_18 = FUN_004ec153();
    iVar1 = local_1c;
    iVar5 = local_1c;
    if (local_1c < local_18) {
      do {
        iVar1 = local_1c;
        uVar3 = thunk_FUN_0046085c(local_1c);
        cVar2 = FUN_00464fbb(uVar3);
        if ((cVar2 == '\0') && (iVar5 = iVar1, uVar3 < 0x81)) break;
        local_1c = iVar1 + 1;
        iVar1 = local_1c;
        iVar5 = local_1c;
      } while (local_1c < local_18);
    }
    do {
      iVar6 = iVar1;
      if (iVar6 < 1) break;
      local_c = iVar6 + -1;
      local_10 = thunk_FUN_0046085c(local_c);
      cVar2 = FUN_00464fbb(local_10);
      iVar1 = local_c;
    } while ((cVar2 != '\0') || (iVar1 = local_c, 0x80 < local_10));
    if (2 < *(byte *)(param_1 + 0x3c)) {
      while (((iVar1 = iVar6, iVar5 < local_18 && (iVar4 = thunk_FUN_0046085c(iVar5), iVar4 != 0xd))
             && (iVar4 != 10))) {
        iVar5 = iVar5 + 1;
        local_1c = iVar5;
      }
      while (iVar6 = iVar1, 0 < iVar6) {
        iVar5 = thunk_FUN_0046085c(iVar6 + -1);
        if ((iVar5 == 0xd) || (iVar1 = iVar6 + -1, iVar5 == 10)) break;
      }
    }
    FUN_004652d6();
  }
  else {
    local_1c = FUN_004ec153();
  }
  FUN_004ea237(local_1c,0);
  FUN_004ea237(iVar6,1);
  return;
}

