// rea decompile_all
// name: FUN_00425fd9
// address: 0x425fd9
// body: available
// range: 0x425fd9-0x426114 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00425fd9(void)

{
  undefined4 *_Dst;
  undefined1 *puVar1;
  int in_EAX;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint local_c;
  
  _Dst = (undefined4 *)(in_EAX + 0x318);
  _memset(_Dst,0,0x18);
  iVar2 = FUN_0041fc08();
  if (((iVar2 != 0) || (local_c < 8)) || (iVar2 = FUN_0041117c(_Dst), iVar2 != 0)) {
    return 8;
  }
  puVar1 = (undefined1 *)*_Dst;
  *(undefined1 **)(in_EAX + 0x31c) = puVar1 + local_c;
  uVar6 = (uint)CONCAT11(puVar1[2],puVar1[3]);
  uVar5 = CONCAT31(CONCAT21(CONCAT11(puVar1[4],puVar1[5]),puVar1[6]),puVar1[7]);
  if (((CONCAT11(*puVar1,puVar1[1]) == 1) && (7 < uVar5)) &&
     ((uVar6 <= uVar5 - 8 >> 2 && (uVar5 + 1 <= local_c)))) {
    *(uint *)(in_EAX + 0x324) = local_c - uVar5;
    *(uint *)(in_EAX + 0x328) = uVar6;
    *(undefined1 **)(in_EAX + 800) = puVar1 + uVar5;
    puVar4 = puVar1 + uVar6 * 4 + 8;
    if (uVar6 != 0) {
      puVar3 = puVar1 + 0xb;
      local_c = uVar6;
      do {
        puVar4 = puVar4 + (uint)CONCAT11(puVar3[-1],*puVar3) * 10;
        puVar3 = puVar3 + 4;
        local_c = local_c - 1;
      } while (local_c != 0);
    }
    if (puVar4 <= puVar1 + uVar5) {
      *(undefined1 *)(in_EAX + 0x32c) = 1;
      return 0;
    }
  }
  FUN_00411199();
  _memset(_Dst,0,0x18);
  return 8;
}

