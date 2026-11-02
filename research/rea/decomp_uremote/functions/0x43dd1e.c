// rea decompile_all
// name: FUN_0043dd1e
// address: 0x43dd1e
// body: available
// range: 0x43dd1e-0x43df38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043dd1e(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int local_24;
  int local_10;
  undefined1 *local_c;
  
  local_10 = 0;
  local_24 = 0x43dd36;
  cVar1 = FUN_004c3153();
  if (cVar1 == '\0') {
    piVar5 = &local_10;
    local_24 = 0x3ecccccd;
    FUN_0044bfc5(piVar5);
    FUN_004764ae(piVar5);
  }
  local_c = (undefined1 *)&local_24;
  FUN_004d076d();
  FUN_0047cda7();
  local_24 = *(int *)(*(int *)(in_ECX + 0x84) + 0x74);
  uVar6 = *(undefined4 *)(in_ECX + 0x18);
  uVar2 = FUN_0043dbda(in_ECX);
  FUN_0047d187(uVar2,uVar6);
  if (0 < *(int *)(in_ECX + 0x90)) {
    local_10 = *(int *)(in_ECX + 0x84);
    iVar4 = *(int *)(in_ECX + 0x94);
    iVar3 = FUN_0043dbda();
    if (iVar4 < iVar3 + -1 + *(int *)(local_10 + 0x74)) {
      if (iVar4 < *(int *)(in_ECX + 0xa4)) {
        local_24 = 0x43ddd7;
        local_24 = FUN_0044bfc5();
        local_24 = local_24 + 0xb0;
      }
      else if (iVar4 < *(int *)(in_ECX + 0xa0)) {
        local_24 = 0x43ddee;
        local_24 = FUN_0044bfc5();
        local_24 = local_24 + 0xac;
      }
      else {
        local_24 = 0x43ddfd;
        local_24 = FUN_0044bfc5();
        local_24 = local_24 + 0xa8;
      }
      local_c = (undefined1 *)&local_24;
      FUN_004d076d();
      FUN_0047cda7();
      local_24 = 2;
      FUN_0047d187(iVar4,*(int *)(in_ECX + 0x18) + -2);
    }
  }
  local_10 = *(int *)(in_ECX + 0x84);
  iVar4 = *(int *)(in_ECX + 0x98);
  iVar3 = FUN_0043dbda();
  if (iVar4 < iVar3 + -1 + *(int *)(local_10 + 0x74)) {
    if (iVar4 < *(int *)(in_ECX + 0xa4)) {
      local_24 = 0x43de61;
      local_24 = FUN_0044bfc5();
      local_24 = local_24 + 0xb0;
      local_c = (undefined1 *)&local_24;
      FUN_004d076d();
      FUN_0047cda7();
      local_24 = *(int *)(in_ECX + 0xa4) - iVar4;
      FUN_0047d187(iVar4,*(int *)(in_ECX + 0x18) + -2);
      iVar4 = *(int *)(in_ECX + 0xa4);
    }
    if (iVar4 < *(int *)(in_ECX + 0xa0)) {
      local_24 = 0x43dea9;
      local_24 = FUN_0044bfc5();
      local_24 = local_24 + 0xac;
      local_c = (undefined1 *)&local_24;
      FUN_004d076d();
      FUN_0047cda7();
      local_24 = *(int *)(in_ECX + 0xa0) - iVar4;
      FUN_0047d187(iVar4,*(int *)(in_ECX + 0x18) + -2);
      iVar4 = *(int *)(in_ECX + 0xa0);
    }
    local_24 = 0x43dee9;
    local_24 = FUN_0044bfc5();
    local_24 = local_24 + 0xa8;
    local_c = (undefined1 *)&local_24;
    FUN_004d076d();
    FUN_0047cda7();
    local_10 = *(int *)(in_ECX + 0x84);
    iVar3 = FUN_0043dbda();
    local_24 = ((iVar3 + *(int *)(local_10 + 0x74)) - iVar4) + -1;
    FUN_0047d187(iVar4,*(int *)(in_ECX + 0x18) + -2);
  }
  return;
}

