// rea decompile_all
// name: FUN_0046bd67
// address: 0x46bd67
// body: available
// range: 0x46bd67-0x46be2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046bd67(int param_1)

{
  short *psVar1;
  ushort uVar2;
  int in_EAX;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iStack_24;
  int local_10;
  uint local_c;
  ushort *local_8;
  
  local_c = 0xffffffff;
  uVar2 = *(ushort *)(in_EAX + 2);
  iVar5 = 7;
  iStack_24 = 4;
  if (uVar2 == 0) {
    iVar5 = 0x8a;
    iStack_24 = 3;
  }
  *(undefined2 *)(in_EAX + 6 + in_ECX * 4) = 0xffff;
  if (-1 < in_ECX) {
    local_8 = (ushort *)(in_EAX + 6);
    local_10 = in_ECX + 1;
    iVar6 = 0;
    uVar3 = (uint)uVar2;
    do {
      uVar4 = (uint)*local_8;
      iVar6 = iVar6 + 1;
      if ((iVar5 <= iVar6) || (uVar3 != uVar4)) {
        if (iVar6 < iStack_24) {
          psVar1 = (short *)(param_1 + 0xa7c + uVar3 * 4);
          *psVar1 = *psVar1 + (short)iVar6;
        }
        else if (uVar3 == 0) {
          if (iVar6 < 0xb) {
            *(short *)(param_1 + 0xac0) = *(short *)(param_1 + 0xac0) + 1;
          }
          else {
            *(short *)(param_1 + 0xac4) = *(short *)(param_1 + 0xac4) + 1;
          }
        }
        else {
          if (uVar3 != local_c) {
            psVar1 = (short *)(param_1 + 0xa7c + uVar3 * 4);
            *psVar1 = *psVar1 + 1;
          }
          *(short *)(param_1 + 0xabc) = *(short *)(param_1 + 0xabc) + 1;
        }
        iVar6 = 0;
        local_c = uVar3;
        if (uVar4 == 0) {
          iVar5 = 0x8a;
        }
        else {
          if (uVar3 != uVar4) {
            iVar5 = 7;
            iStack_24 = 4;
            goto LAB_0046be21;
          }
          iStack_24 = 6;
          iVar5 = iStack_24;
        }
        iStack_24 = 3;
      }
LAB_0046be21:
      local_8 = local_8 + 2;
      local_10 = local_10 + -1;
      uVar3 = uVar4;
    } while (local_10 != 0);
  }
  return;
}

