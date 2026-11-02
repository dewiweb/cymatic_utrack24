// rea decompile_all
// name: FUN_0041c45e
// address: 0x41c45e
// body: available
// range: 0x41c45e-0x41c575 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041c45e(undefined4 param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  short *psVar3;
  uint uVar4;
  int local_8;
  
  puVar1 = (undefined4 *)FUN_00411912(0x9c0,&local_8);
  if (local_8 == 0) {
    *puVar1 = param_1;
    puVar2 = puVar1 + 0x35;
    *puVar2 = (uint)*(ushort *)(param_2 + 0x78);
    psVar3 = (short *)(param_2 + 0x80);
    for (uVar4 = (uint)*(byte *)(param_2 + 0x7c); uVar4 != 0; uVar4 = uVar4 - 1) {
      puVar2 = puVar2 + 3;
      *puVar2 = (int)*psVar3;
      psVar3 = psVar3 + 1;
    }
    puVar1[0x34] = *(byte *)(param_2 + 0x7c) + 1;
    puVar2 = puVar1 + 2;
    *puVar2 = (uint)*(ushort *)(param_2 + 0x7a);
    psVar3 = (short *)(param_2 + 0x9a);
    for (uVar4 = (uint)*(byte *)(param_2 + 0x7d); uVar4 != 0; uVar4 = uVar4 - 1) {
      puVar2 = puVar2 + 3;
      *puVar2 = (int)*psVar3;
      psVar3 = psVar3 + 1;
    }
    puVar1[1] = *(byte *)(param_2 + 0x7d) + 1;
    FUN_0041c099(*(undefined1 *)(param_2 + 8),param_2 + 0xc,*(undefined1 *)(param_2 + 9),
                 param_2 + 0x28,*(undefined4 *)(param_2 + 0x74),0);
    FUN_0041c099(*(undefined1 *)(param_2 + 10),param_2 + 0x3c,*(undefined1 *)(param_2 + 0xb),
                 param_2 + 0x58,*(undefined4 *)(param_2 + 0x74),1);
    puVar1[0x26b] = *(undefined4 *)(param_2 + 0x6c);
    puVar1[0x26c] = *(undefined4 *)(param_2 + 0x70);
    puVar1[0x26e] = *(undefined4 *)(param_2 + 0x74);
    puVar1[0x32] = 0;
    puVar1[0x33] = 0;
    puVar1[0x65] = 0;
    puVar1[0x66] = 0;
  }
  *param_3 = (int)puVar1;
  return local_8;
}

