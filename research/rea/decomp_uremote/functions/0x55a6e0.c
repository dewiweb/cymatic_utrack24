// rea decompile_all
// name: FUN_0055a6e0
// address: 0x55a6e0
// body: available
// range: 0x55a6e0-0x55a80a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0055a6e0(ushort param_1,int param_2,ushort param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  undefined1 local_20 [19];
  char local_d;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0;
  *(ushort *)(param_2 + 0x4c) = param_3 | 0x44;
  *(undefined4 *)(param_2 + 0x48) = param_5;
  FUN_00503de0(param_4);
  iVar2 = FUN_0052f3a0(*(undefined2 *)(in_ECX + 10));
  if (iVar2 == 0) {
    for (local_c = 0; local_c < *(ushort *)(in_ECX + 10); local_c = local_c + 1) {
      if ((*(ushort *)(*(int *)(in_ECX + 4) + 6 + local_c * 8) & param_1) != 0) {
        uVar3 = FUN_0055af60(*(undefined2 *)(*(int *)(in_ECX + 4) + local_c * 8));
        cVar1 = FUN_005378d0(uVar3);
        local_d = '\x01' - (cVar1 != '\0');
        if (local_d != '\0') {
          uVar4 = (uint)*(ushort *)(*(int *)(in_ECX + 4) + 2 + local_c * 8);
          uVar3 = FUN_0055af60(*(undefined2 *)(*(int *)(in_ECX + 4) + local_c * 8));
          FUN_00503c30(uVar3,uVar4);
          cVar1 = FUN_005039c0();
          if (cVar1 == '\0') {
            FUN_0052f410(local_20);
          }
        }
      }
    }
  }
  else {
    local_8 = 0x17;
  }
  return local_8;
}

