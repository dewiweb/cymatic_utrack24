// rea decompile_all
// name: FUN_0042f111
// address: 0x42f111
// body: available
// range: 0x42f111-0x42f229 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042f111(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint local_c;
  
  puVar4 = *(uint **)(param_1 + 0x214);
  if (puVar4 != (uint *)0x0) {
    uVar5 = puVar4[1];
    uVar3 = *puVar4;
    FUN_00411a5c(puVar4[6]);
    puVar4[6] = 0;
    if (1 < uVar3) {
      puVar1 = puVar4 + 7;
      uVar2 = uVar3;
      while (uVar2 = uVar2 - 1, uVar2 != 0) {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      }
    }
    FUN_00411a5c(puVar4[0x36]);
    puVar4[0x36] = 0;
    FUN_00411a5c(puVar4[0x25]);
    puVar4[0x25] = 0;
    FUN_00411a5c(puVar4[0x48]);
    puVar4[0x48] = 0;
    if (uVar3 != 0) {
      puVar1 = puVar4 + 0x24;
      do {
        puVar1[0x11] = 0;
        *puVar1 = 0;
        puVar1[0x23] = 0;
        puVar1 = puVar1 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    FUN_00411a5c(puVar4[0x22]);
    puVar4[0x22] = 0;
    puVar4[0x23] = 0;
    if (uVar5 != 0) {
      puVar1 = puVar4 + 2;
      local_c = uVar5;
      do {
        FUN_00411a5c(*puVar1);
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
        local_c = local_c - 1;
      } while (local_c != 0);
    }
    if (uVar5 != 0) {
      puVar4 = puVar4 + 0x17;
      do {
        FUN_00411a5c(*puVar4);
        *puVar4 = 0;
        *(undefined1 *)(puVar4 + -1) = 0;
        puVar4 = puVar4 + 3;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    FUN_00411a5c(*(undefined4 *)(param_1 + 0x214));
    *(undefined4 *)(param_1 + 0x214) = 0;
  }
  return;
}

