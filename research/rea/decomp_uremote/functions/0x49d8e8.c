// rea decompile_all
// name: FUN_0049d8e8
// address: 0x49d8e8
// body: available
// range: 0x49d8e8-0x49db11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0049d8e8(void)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  uint *puVar8;
  undefined1 uStack00000008;
  undefined1 uStack00000009;
  undefined1 uStack0000000a;
  undefined1 uStack0000000b;
  int local_50 [2];
  int local_48;
  int local_44;
  int local_34;
  undefined1 local_30;
  int local_2c;
  uint local_28;
  undefined1 *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x49d8f4;
  iVar5 = FUN_0047e366();
  local_20 = FUN_0047e371();
  iVar6 = FUN_0049a252();
  if (iVar6 != 0) {
    local_1c = iVar6;
    local_18 = FUN_0048f07b(iVar6);
    if (local_18 != 0) {
      FUN_00499ced();
      cVar2 = FUN_0047e3d7(0,0,0);
      FUN_00498d6a(iVar6,local_20,8,(cVar2 != '\0') * '\x04' + '\x02');
      local_24 = _malloc(iVar5 << 2);
      local_8 = 0;
      local_34 = 0x80808;
      local_30 = 8;
      FUN_004991f4(iVar6);
      FUN_00499edb(iVar6);
      FUN_00499818();
      FUN_004997ff();
      FUN_0047e7d7(local_50,0);
      local_8._0_1_ = 1;
      local_14 = 0;
      if (0 < local_20) {
        local_34 = iVar5 + -1;
        do {
          puVar7 = local_24;
          puVar8 = (uint *)(local_48 * local_14 + local_50[0]);
          cVar2 = FUN_0047e3d7();
          iVar5 = local_34;
          if (cVar2 == '\0') {
            for (; -1 < iVar5; iVar5 = iVar5 + -1) {
              *puVar7 = *(undefined1 *)((int)puVar8 + 2);
              puVar7[1] = *(undefined1 *)((int)puVar8 + 1);
              puVar7[2] = (char)*puVar8;
              puVar8 = (uint *)((int)puVar8 + local_44);
              puVar7 = puVar7 + 3;
            }
          }
          else {
            while (local_2c = iVar5, -1 < local_2c) {
              uVar1 = *puVar8;
              local_28 = uVar1 >> 0x18;
              if (local_28 < 0xff) {
                _uStack0000000a = (undefined2)(uVar1 >> 0x10);
                if (local_28 == 0) {
                  uVar3 = (undefined1)(uVar1 >> 0x18);
                  _uStack00000008 = CONCAT11(uVar3,uVar3);
                  uVar3 = 0;
                }
                else {
                  uVar3 = FUN_004706a0(0xff);
                  uVar4 = FUN_004706a0(0xff);
                  _uStack00000008 = CONCAT11(uVar4,uVar3);
                  uVar3 = FUN_004706a0(0xff);
                }
              }
              else {
                uStack0000000a = (undefined1)(uVar1 >> 0x10);
                uVar3 = uStack0000000a;
                _uStack00000008 = uVar1;
              }
              *puVar7 = uVar3;
              puVar7[1] = uStack00000009;
              puVar7[2] = uStack00000008;
              puVar7[3] = uStack0000000b;
              puVar8 = (uint *)((int)puVar8 + local_44);
              puVar7 = puVar7 + 4;
              iVar5 = local_2c + -1;
            }
          }
          FUN_0049a2ba(local_1c);
          local_14 = local_14 + 1;
        } while (local_14 < local_20);
      }
      FUN_0049a156();
      FUN_0049a5a7();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_0047e819();
      local_8 = 0xffffffff;
      _free(local_24);
      return 1;
    }
    FUN_0049a5a7();
  }
  return 0;
}

