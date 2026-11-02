// rea decompile_all
// name: FUN_0041d2ff
// address: 0x41d2ff
// body: available
// range: 0x41d2ff-0x41d415 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041d2ff(void)

{
  uint uVar1;
  int in_EAX;
  uint uVar2;
  char cVar3;
  uint *in_ECX;
  uint *puVar4;
  uint uVar5;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  uVar5 = ((uint *)in_ECX[in_EAX * 10 + 0xf])[2];
  local_8 = *(uint *)in_ECX[in_EAX * 10 + 0xf];
  cVar3 = (in_EAX != 0) + '\x01';
  local_10 = FUN_0040d2d8();
  if (0x1e < local_10) {
    local_10 = 0x1e;
  }
  if ((1 < local_8) && (uVar2 = *in_ECX, uVar2 != 0)) {
    uVar1 = *(uint *)(uVar5 + 0xc);
    if (uVar1 <= uVar2) {
      uVar2 = uVar1;
    }
    local_14 = local_8 - 1;
    do {
      local_c = *in_ECX;
      if (*(uint *)(uVar5 + 0x1c) <= *in_ECX) {
        local_c = *(uint *)(uVar5 + 0x1c);
      }
      if (0 < (int)(local_c - uVar2)) {
        FUN_0041c822();
        FUN_0041d14e(local_c - uVar2,local_10,cVar3);
      }
      local_8 = local_8 - 1;
      local_14 = local_14 + -1;
      uVar2 = local_c;
      uVar5 = uVar5 + 0x10;
    } while (local_14 != 0);
  }
  if (local_8 == 1) {
    uVar5 = *in_ECX;
    FUN_0041c822();
    FUN_0041d14e(uVar5,local_10,cVar3);
  }
  uVar5 = *in_ECX;
  if (uVar5 != 0) {
    puVar4 = (uint *)(in_ECX[2] + 0x10);
    do {
      if ((puVar4[4] != 0) && ((*puVar4 & 0x10) == 0)) {
        *puVar4 = *puVar4 | 0x10;
      }
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 0xc;
    } while (uVar5 != 0);
  }
  return;
}

