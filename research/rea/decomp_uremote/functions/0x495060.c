// rea decompile_all
// name: FUN_00495060
// address: 0x495060
// body: available
// range: 0x495060-0x49511e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00495060(void)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_EAX;
  byte *pbVar5;
  int in_ECX;
  int in_EDX;
  int iVar6;
  byte local_8;
  
  bVar1 = *(byte *)(in_EAX + 2);
  iVar6 = *in_EAX;
  if ((bVar1 & 4) != 0) {
    if (*(char *)((int)in_EAX + 9) == '\b') {
      iVar3 = *(int *)(in_ECX + 0x14c);
      if (iVar3 != 0) {
        pbVar5 = (byte *)(in_EDX + -1);
        for (; pbVar5 = pbVar5 + (uint)((bVar1 & 2) != 0) * 2 + 2, iVar6 != 0; iVar6 = iVar6 + -1) {
          *pbVar5 = *(byte *)((uint)*pbVar5 + iVar3);
        }
        return;
      }
    }
    else if (*(char *)((int)in_EAX + 9) == '\x10') {
      iVar3 = *(int *)(in_ECX + 0x154);
      uVar4 = *(undefined4 *)(in_ECX + 0x13c);
      if (iVar3 != 0) {
        pbVar5 = (byte *)(in_EDX + -2);
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          pbVar5 = pbVar5 + (uint)((bVar1 & 2) != 0) * 4 + 4;
          local_8 = (byte)uVar4;
          uVar2 = *(undefined2 *)
                   (*(int *)(iVar3 + (uint)(pbVar5[1] >> (local_8 & 0x1f)) * 4) + (uint)*pbVar5 * 2)
          ;
          *pbVar5 = (byte)((ushort)uVar2 >> 8);
          pbVar5[1] = (byte)uVar2;
        }
        return;
      }
    }
  }
  FUN_00491216();
  return;
}

