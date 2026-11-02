// rea decompile_all
// name: FUN_00420bcd
// address: 0x420bcd
// body: available
// range: 0x420bcd-0x420d01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00420bcd(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint in_EDX;
  int *unaff_ESI;
  undefined1 *puVar7;
  undefined1 *local_10;
  char *local_c;
  
  uVar2 = unaff_ESI[8];
  iVar3 = unaff_ESI[4];
  if (in_EDX < uVar2) {
    iVar4 = uVar2 * 2;
    local_10 = (undefined1 *)(iVar3 + 0xe + in_EDX * 2);
    local_c = (char *)(iVar3 + 0x10 + (iVar4 + in_EDX) * 2);
    iVar1 = uVar2 * -2 + 1;
    puVar5 = (undefined1 *)(iVar4 + 0x10 + in_EDX * 2 + iVar3);
    puVar7 = (undefined1 *)(uVar2 * 6 + iVar3 + 0x10 + in_EDX * 2);
    do {
      unaff_ESI[0xb] = (uint)CONCAT11(*local_10,puVar5[1 - (iVar4 + 2)]);
      unaff_ESI[10] = (uint)CONCAT11(*puVar5,local_c[iVar1]);
      unaff_ESI[0xc] = (uint)(byte)puVar7[iVar1] | (int)(short)((short)*local_c << 8);
      uVar6 = (uint)CONCAT11(*puVar7,puVar7[1]);
      if ((((uVar2 - 1 <= in_EDX) && (unaff_ESI[10] == 0xffff)) && (unaff_ESI[0xb] == 0xffff)) &&
         ((uVar6 != 0 &&
          ((undefined1 *)(*(int *)(*unaff_ESI + 0x1f8) + *(int *)(*unaff_ESI + 500)) <
           puVar7 + uVar6 + 2)))) {
        unaff_ESI[0xc] = 1;
        uVar6 = 0;
      }
      if (uVar6 != 0xffff) {
        unaff_ESI[0xd] = -(uint)(uVar6 != 0) & (uint)(puVar7 + uVar6);
        unaff_ESI[9] = in_EDX;
        return 0;
      }
      local_10 = local_10 + 2;
      local_c = local_c + 2;
      in_EDX = in_EDX + 1;
      puVar5 = puVar5 + 2;
      puVar7 = puVar7 + 2;
    } while (in_EDX < (uint)unaff_ESI[8]);
  }
  return 0xffffffff;
}

