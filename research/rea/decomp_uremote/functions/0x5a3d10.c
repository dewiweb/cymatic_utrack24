// rea decompile_all
// name: FUN_005a3d10
// address: 0x5a3d10
// body: available
// range: 0x5a3d10-0x5a3ebb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a3d10(void)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  int in_ECX;
  int local_28;
  int local_24;
  ushort local_8;
  
  (*(code *)**(undefined4 **)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 8)))();
  iVar1 = *(int *)(in_ECX + 0x2c);
  uVar2 = *(uint *)(iVar1 + 0x5a0);
  *(uint *)(iVar1 + 0x5a0) = uVar2 + 1;
  *(uint *)(iVar1 + 0x5a4) = *(int *)(iVar1 + 0x5a4) + (uint)(0xfffffffe < uVar2);
  if (*(int *)(in_ECX + 0x54) == 0) {
    if ((*(byte *)(in_ECX + 0x6a) >> 1 & 1) != 0) {
      *(byte *)(in_ECX + 0x6a) = *(byte *)(in_ECX + 0x6a) & 0xfd;
      if (in_ECX == 0) {
        local_28 = 0;
      }
      else {
        local_28 = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
      }
      FUN_005788c0(local_28,0);
    }
  }
  else {
    for (local_8 = 0;
        uVar3 = (*(code *)**(undefined4 **)
                            (*(int *)(in_ECX + 0x54) + 0x28 +
                            *(int *)(*(int *)(*(int *)(in_ECX + 0x54) + 0x28) + 0xc)))(),
        local_8 < uVar3; local_8 = local_8 + 1) {
      if ((*(byte *)(*(int *)(in_ECX + 0x6c) + (uint)local_8) >> 1 & 1) != 0) {
        *(byte *)((uint)local_8 + *(int *)(in_ECX + 0x6c)) =
             *(byte *)(*(int *)(in_ECX + 0x6c) + (uint)local_8) & 0xfd;
        if (in_ECX == 0) {
          local_24 = 0;
        }
        else {
          local_24 = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
        }
        FUN_005788c0(local_24,local_8 + 1);
      }
    }
  }
  (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 8)) + 4))();
  return;
}

